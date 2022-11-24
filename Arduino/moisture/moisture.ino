const int AirValue = 3300;   //moiture value from sensor when it is in the air
const int WaterValue = 0;  //moiture value from sensor when it is in the water
int soilMoistureValue = 0;
int soilmoisturepercent=0;

void setup() {
  pinMode(14,OUTPUT);
  Serial.begin(9600); // open serial port, set the baud rate to 9600 bps
  

}
void loop() {
soilMoistureValue = analogRead(34);  //put Sensor insert into soil
Serial.println(soilMoistureValue);
soilmoisturepercent = map(soilMoistureValue, AirValue, WaterValue, 0, 100);
if(soilmoisturepercent < 40)
{
  digitalWrite(14,HIGH);
}
else if(soilmoisturepercent > 50)
{
  digitalWrite(14,LOW);
}
  delay(1000);          //delay 1 sec
}
