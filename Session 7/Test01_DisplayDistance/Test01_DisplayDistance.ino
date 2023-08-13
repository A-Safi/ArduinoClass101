#include "SRF05.h"
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int trigger = 9;
const int echo    = 10;
SRF05 SRF(trigger, echo);


void setup()
{
  lcd.begin(16, 2);
  lcd.print("hello, world!");
  
  Serial.begin(115200);

  SRF.setCorrectionFactor(1.035);
  SRF.setModeAverage(10);
}


void loop()
{
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print(SRF.getMillimeter());
  lcd.print(" mm");
  delay(500);
}


// -- END OF FILE --
