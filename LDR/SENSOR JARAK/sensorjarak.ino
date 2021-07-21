#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);


int trigpin = 9;
int echopin = 8;
 
long times;
int distance;

void setup() {
  lcd.begin(16,2);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);

}

void loop() {
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);

  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);

  times = pulseIn(echopin,HIGH);
  distance = times * 0.034 / 1.950 ;

  lcd.setCursor(0,0); lcd.print("Jarak:");
  lcd.print(distance); lcd.print(" cm");
}
