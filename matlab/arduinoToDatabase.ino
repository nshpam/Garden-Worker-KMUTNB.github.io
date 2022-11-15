#if defined(ESP32)
  #include <WiFiMulti.h>
  WiFiMulti wifiMulti;
  #define DEVICE "ESP32"
  #elif defined(ESP8266)
  #include <ESP8266WiFiMulti.h>
  ESP8266WiFiMulti wifiMulti;
  #define DEVICE "ESP8266"
  #endif
  
  #include <InfluxDbClient.h>
  #include <InfluxDbCloud.h>
  
  // WiFi AP SSID
  #define WIFI_SSID "Atom"
  // WiFi password
  #define WIFI_PASSWORD "12345678"
  
  #define INFLUXDB_URL "https://europe-west1-1.gcp.cloud2.influxdata.com"
  #define INFLUXDB_TOKEN "S1Oi-nVFSFeq-hAFY4MqxTxPookSkcL2mwokovgEcZnDJvVd_LfYxm44x55b6PxFpmouGKQ5BGjqVTN-LNfE7A=="
  #define INFLUXDB_ORG "67aef46463cc51e3"
  #define INFLUXDB_BUCKET "signal"
  
  // Time zone info
  #define TZ_INFO "UTC7"

  // assign PIN
  #define AOUT_PIN 34 // ESP32 pin GIOP36 (ADC0) that connects to AOUT pin of moisture sensor
  
  // Declare InfluxDB client instance with preconfigured InfluxCloud certificate
  InfluxDBClient client(INFLUXDB_URL, INFLUXDB_ORG, INFLUXDB_BUCKET, INFLUXDB_TOKEN, InfluxDbCloud2CACert);
  
  // Declare Data point
  Point sensor("wifi_status");
  
  void setup() {
    Serial.begin(115200);
  
    // Setup wifi
    WiFi.mode(WIFI_STA);
    wifiMulti.addAP(WIFI_SSID, WIFI_PASSWORD);
  
    Serial.print("Connecting to wifi");
    while (wifiMulti.run() != WL_CONNECTED) {
      Serial.print(".");
      delay(100);
    }
    Serial.println();
  
    // Accurate time is necessary for certificate validation and writing in batches
    // We use the NTP servers in your area as provided by: https://www.pool.ntp.org/zone/
    // Syncing progress and the time will be printed to Serial.
    timeSync(TZ_INFO, "pool.ntp.org", "time.nis.gov");
  
  
    // Check server connection
    if (client.validateConnection()) {
      Serial.print("Connected to InfluxDB: ");
      Serial.println(client.getServerUrl());
    } else {
      Serial.print("InfluxDB connection failed: ");
      Serial.println(client.getLastErrorMessage());
    }
  }
  void loop() {
    // Clear fields for reusing the point. Tags will remain the same as set above.
    sensor.clearFields();

    // read the analog value from sensor
    int value = analogRead(AOUT_PIN); 
    Serial.print("Moisture value: ");
    Serial.println(value);
    
    // Store measured value into point
    // Report RSSI of currently connected network
    sensor.addField("roomMoisture", value);
  
    // Print what are we exactly writing
    Serial.print("Writing: ");
    Serial.println(sensor.toLineProtocol());
  
    // Check WiFi connection and reconnect if needed
    if (wifiMulti.run() != WL_CONNECTED) {
      Serial.println("Wifi connection lost");
    }
  
    // Write point
    if (!client.writePoint(sensor)) {
      Serial.print("InfluxDB write failed: ");
      Serial.println(client.getLastErrorMessage());
    }
  
    Serial.println("Waiting 1 second");
    delay(10000);
    }
