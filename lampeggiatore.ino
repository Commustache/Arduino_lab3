int led = 5;
//int i;
//int n = 500;

void setup()
{
  pinMode(led, OUTPUT);  
}

void loop()
{
  //for (i=0; i<n; i++)
    {
      digitalWrite(led, HIGH);   // accende il LED (HIGH è il livello del voltaggio)
      delay(10);                // aspetta per 10 msecondi
      digitalWrite(led, LOW);    // Spegne il LED rendendo portando la tensione in LOW
      delay(1000);               // aspetta per 1000 msecondi
    }
}
