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
//Serial.println(soilMoistureValue);
soilmoisturepercent = map(soilMoistureValue, AirValue, WaterValue, 0, 100);
if(soilmoisturepercent < 30)
{
  //Serial.println("Pump on");
  digitalWrite(14,HIGH);
}
else if(soilmoisturepercent >50)
{
  //Serial.println("Pump off");
  digitalWrite(14,LOW);
}


if(soilmoisturepercent >= 100)
{
  Serial.println(soilMoistureValue,100);
}
else if(soilmoisturepercent <=0)
{
  Serial.println(soilMoistureValue,0);
}
else if(soilmoisturepercent >0 && soilmoisturepercent < 100)
{

  Serial.println(soilMoistureValue,soilmoisturepercent);

}

  delay(1000);
}
