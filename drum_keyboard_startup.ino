#include <Keyboard.h>
#include "pitches.h"
int analogpin0={A0};
int analogpin1={A1};
int analogpin2={A2};
int analogpin3={A3};
int analogpin4={A4};
int analogpin5={A5};
int threshold=150;
int melody[] = {
      NOTE_D4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_C4, NOTE_C4, NOTE_G4
};

int noteDurations[] = {
      1, 3, 3, 3, 6, 6, 7
};

void setup()
{
Serial.begin(9600);
Keyboard.begin();
for (int thisNote = 0; thisNote < 7; thisNote++) {

        int noteDuration = 1000/noteDurations[thisNote];
        tone(13, melody[thisNote],noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
}

}

void loop()
{
if(analogRead(analogpin0)>threshold)
{
Serial.println("A0");
  Keyboard.press('w');
  delay(100);
  Keyboard.releaseAll();
}
if (analogRead(analogpin1)>threshold)
{
Serial.println("A1");
  Keyboard.press('a');
  delay(100);
  Keyboard.releaseAll();
}
if (analogRead(analogpin2)>threshold)
{
Serial.println("A2"); 
  Keyboard.press('s');
  delay(100);
  Keyboard.releaseAll();
}
if (analogRead(analogpin3)>threshold)
{
Serial.println("A3"); 
  Keyboard.press('d');
  delay(100);
  Keyboard.releaseAll();
}
if (analogRead(analogpin4)>threshold)
{
Serial.println("A4"); 
  Keyboard.press('q');
  delay(100);
  Keyboard.releaseAll();
}
if (analogRead(analogpin5)>threshold)
{
Serial.println("A5"); 
  Keyboard.press('e');
  delay(100);
  Keyboard.releaseAll();
}

}
