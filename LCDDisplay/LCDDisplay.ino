#include "LiquidCrystal_I2C.h"

LiquidCrystal_I2C lcd(0x27,16,2);

String message = String(" :D  Hello, Dear Romoni !! Bhalobasiitohhh :3 ");
int length;

void setup() 
{
  lcd.init();
  lcd.backlight();  

   length = message.length();
}

void loop()
{
  for(int i = 0; i < length; i++)
  {
    ClearRow(0);
    lcd.print(message.substring(i,i+15));
    delay(300);
  }
}

void ClearRow(int rowNum)
{
  lcd.setCursor(0,rowNum);
  lcd.print("                 ");
  lcd.setCursor(0,rowNum);
}
