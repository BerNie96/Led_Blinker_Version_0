/*
   Ledlauflicht als kompaktversion
   BN
   18.09.2020
*/
byte led[8] = {2, 3, 4, 5, 6, 7, 8, 9};    //erstellen eines Arrays für einfache Pin zuordnung
byte ledStatus[6][8] = {
  {1, 0, 0, 0, 0, 0, 0, 1},
  {0, 1, 0, 0, 0, 0, 1, 0},
  {0, 0, 1, 0, 0, 1, 0, 0},
  {0, 0, 0, 1, 1, 0, 0, 0},
  {0, 0, 1, 0, 0, 1, 0, 0},
  {0, 1, 0, 0, 0, 0, 1, 0},
};

void setup() {
  // put your setup code here, to run once:

  // Serial.begin(2000000);
  for ( byte i = 0; i < 8; i++)
  {
    pinMode (led[i], OUTPUT);                 //Setzten der Pins als Ausgänge

  }
}

void loop() {
  // put your main code here, to run repeatedly:

  for ( byte  i = 0; i < 6; i++)  //Zeilen
  {
    //delay(50);
    for ( byte  j = 0; j < 8; j++)  //Spalte
    {
        digitalWrite (led[j],ledStatus[i][j]);
        delay(50);
    }
  }

}
