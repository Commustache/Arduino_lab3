 /*
Questo programma consente di mandare un messaggio di S.O.S
tramite il codice morse.
Nell'alfabeto morse le lettere S e O sono 
S= . . .
O= - - -
*/
//il pin 13,nella maggior parte delle schede arduino, ha un LED 
integrato 
// gli do un nome:
int led = 13;
int i;

// la routine di setup viene eseguita una volta quando si preme 
il tasto reset:
void setup() {                
//inizializzo il pin digitale come un output
  pinMode(led, OUTPUT);     
}

void loop() {
  for (i=0; i<3; i++)
    {
    digitalWrite(led, HIGH);   // accende il LED (HIGH è il 
    livello del voltaggio)
    delay(500);                // aspetta per 500 msecondi
    digitalWrite(led, LOW);    // Spegne il LED rendendo portando la tensione in LOW
    delay(500);                // aspetta per 500 msecondi
    }
  for (i=0; i<3; i++)
    {
    digitalWrite(led, HIGH);   // accende il LED (HIGH è il 
    livello del voltaggio)
    delay(1000);               // aspetta per un secondo
    digitalWrite(led, LOW);    // Spegne il LED rendendo portando la tensione in LOW
    delay(500);                // aspetta per 500 msecondi
    }
  for (i=0; i<3; i++)
    {
    digitalWrite(led, HIGH);   // accende il LED (HIGH è il 
    livello del voltaggio)
    delay(500);                // aspetta per 500 msecondi
    digitalWrite(led, LOW);    // Spegne il LED rendendo portando la tensione in LOW
    delay(500);                // aspetta per 500 msecondi
    }
              
}