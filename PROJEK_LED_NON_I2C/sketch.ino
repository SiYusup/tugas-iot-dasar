#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("SELAMAT DATANG");
  lcd.setCursor(0,1);
  lcd.print("XII RPL 2");

}

void loop() {
  // put your main code here, to run repeatedly:

}
