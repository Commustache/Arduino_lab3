// Read the light intensity from a light sensor connected to analog input A0
 
int sensorPin = A0; 
int sensorValue;
float intensity;

void setup()
{
// open a serial connection to display values
  Serial.begin(9600);
}

void loop()
{
  intensity=0.0;
  for(int i=1; i<=10; i++){
  sensorValue=analogRead(sensorPin); // read value from sensor
  intensity=intensity+sensorValue;
  }
  intensity=intensity/10.0;
  Serial.print(millis()/1000.);
  Serial.print("  ");
  Serial.println(intensity);
  delay(1000); // Wait some time before reading new value
 
}
