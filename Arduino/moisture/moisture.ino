const int AirValue = 3300;   //you need to replace this value with Value_1
const int WaterValue = 0;  //you need to replace this value with Value_2
int soilMoistureValue = 0;
int soilmoisturepercent=0;

void setup() {
  pinMode(14,OUTPUT);
  Serial.begin(9600); // open serial port, set the baud rate to 9600 bps
  
  
}
void loop() {
soilMoistureValue = analogRead(34);  //put Sensor insert into soil
Serial.println(soilMoistureValue);

  delay(1000);
}
