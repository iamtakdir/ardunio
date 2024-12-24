
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.backlight();
}


void loop()
{
  lcd.setCursor(0,0);
  lcd.print("Shuvo Bhai!");
  lcd.setCursor(0,1);
  lcd.print("Kiser Cinta?");

  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Have A !");
  lcd.setCursor(0,1);
  lcd.print("Relax!");

  delay(3000);
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("Chill!");
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("~ Circuit Hay Na!");
  lcd.setCursor(0,1);
  lcd.print("Shishir Panda ");
  delay(4000);
  lcd.clear();
}
