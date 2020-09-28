/*
 * Ledlauflicht als kompaktversion
 * BN
 * 18.09.2020
 */
 byte led[4] = {13, 12, 11, 10};    //erstellen eines 
 

void setup() {
  // put your setup code here, to run once:
  for ( byte i=0; i<4; i++)
  {
    pinMode (led[i], OUTPUT);
    
  }

}

void loop() {
  // put your main code here, to run repeatedly:

  for ( byte  i=0; i<4; i++)
  {
    digitalWrite(led[i], HIGH);
    Serial.println("Led_"+i);
    delay(1000);
    digitalWrite(led[i], LOW);
    Serial.println("Led_"+i);
  }

}
