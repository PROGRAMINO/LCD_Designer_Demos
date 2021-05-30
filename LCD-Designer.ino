/*************************************************************
 Create with PROGRAMINO-IDE http://www.programino.com
 
 Project:       Programino LCD-Designer Demo
 Librarys:      LiquidCrystal.h
 Author:        UlliS
 Description:
*************************************************************/

// LCD library
#include <LiquidCrystal.h>

// LCD pins
// RS, E, D4, D5, D6, D7
LiquidCrystal lcd(11, 10, 2, 3, 4, 5);

byte myChar[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};

void setup() {

    lcd.createChar(0, myChar);
    lcd.begin(16, 2);
    lcd.write(byte(0));
    
}

void loop() {

    // nothing to do...

}
