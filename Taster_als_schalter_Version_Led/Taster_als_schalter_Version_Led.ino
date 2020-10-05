#include <OneButton.h>

byte led[8] = {2, 3, 4, 5, 6, 7, 8, 9};    //erstellen eines Arrays für einfache Pin zuordnung
byte ledStatus[6][8] = {
  {1, 0, 0, 0, 0, 0, 0, 1},
  {0, 1, 0, 0, 0, 0, 1, 0},
  {0, 0, 1, 0, 0, 1, 0, 0},
  {0, 0, 0, 1, 1, 0, 0, 0},
  {0, 0, 1, 0, 0, 1, 0, 0},
  {0, 1, 0, 0, 0, 0, 1, 0},
};


boolean tasterRaste;

OneButton Taster(10, true);

void setup()
{
  for ( byte i = 0; i < 8; i++)
  {
    pinMode (led[i], OUTPUT);                 //Setzten der Pins als Ausgänge

  }


  // link the doubleclick function to be called on a doubleclick event.
  Taster.attachClick(Funktion_Taster);

}

void loop()
{
  // keep watching the push button:
  Taster.tick();

  // You can implement other code in here or just wait a while
  delay(10);


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

void Funktion_Taster ()
{
  tasterRaste = ! tasterRaste;
}
