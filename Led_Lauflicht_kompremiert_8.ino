/*
 * Ledlauflicht als kompaktversion
 * BN
 * 18.09.2020
 */
 byte led[8] = {2, 3, 4, 5, 6, 7, 8, 9};    //erstellen eines Arrays für einfache Pin zuordnung
 

void setup() {
  // put your setup code here, to run once:

 // Serial.begin(2000000);
  for ( byte i=0; i<8; i++)
  {
    pinMode (led[i], OUTPUT);                 //Setzten der Pins als Ausgänge
    
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  for ( byte  i=0; i<8; i++)
  {
    digitalWrite(led[i], HIGH);
    //Serial.println("Led_"+i);
    delay(1000);                              //Hauptprogramm schaltet Leds ein und aus mit einer Sekunde Verstezung 
    digitalWrite(led[i], LOW);
    //Serial.println("Led_"+i);
  }

}
