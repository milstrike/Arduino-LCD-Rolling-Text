#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

#define I2C_ADDR 0x27
#define BACKLIGHT_PIN 3
#define En_pin 2
#define Rw_pin 1
#define Rs_pin 0
#define D4_pin 4
#define D5_pin 5
#define D6_pin 6
#define D7_pin 7

LiquidCrystal_I2C lcd(I2C_ADDR,En_pin,Rw_pin,Rs_pin,D4_pin,D5_pin,D6_pin,D7_pin);
int i = 16;
int j, alpha, redo, algebra = 0;

//------------------------------------------------- instant usage -----------------------------------------------
char mytext[] = "Hello, this is milstrike speaking. "; //Don't forget to add a white space in the end of the text.
int lcdLine = 0; //choose line 1 (0) or line 2 (1);
int rollSpeed = 250; //in millis
int delayPerRoll = 1000; //in millis
//---------------------------------------------------------------------------------------------------------------

void setup(){
  lcd.begin (16,2); 
  // Switch on the backlight
  lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
  lcd.setBacklight(HIGH);
  lcd.home ();
  alpha = sizeof(mytext) - 1; //get the array size of mytext;
  redo = sizeof(mytext) - 1; //get the array size of mytext;
}

void loop(){
  if(i >= 0){
    j++;
    lcd.setCursor (i,lcdLine);
    for(int k = 0; k<j; k++){
      lcd.print(mytext[k]);
    }
  }
  
  else if(i < 0){
    int rr = 0;
    algebra++;
    lcd.setCursor (0,lcdLine);
    for(int k = algebra ; k<alpha; k++){
      lcd.print(mytext[k]);
      rr++;
      if(rr == 16){
        k = alpha;
      }
    }
    redo--;
  }
  
  delay(rollSpeed);
  i--;
  if(redo == 0){
    i = 16;
    j = 0;
    redo = alpha;
    algebra = 0;
    delay(delayPerRoll);
  }
}
