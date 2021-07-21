#include <LiquidCrystal.h>

#include <LiquidCrystal.h>

//inisialisasi koneksi pin LCD dengan pin Arduino
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int ldr = A0;
const int led = 6;

void setup() {
  lcd.begin(16, 2);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int nilai = analogRead(ldr); 
  Serial.print("Nilai LDR: "); 
  Serial.println(nilai);

 if (nilai < 800)  {
  digitalWrite(led ,LOW);
  Serial.print("LED HIDUP : ");
  Serial.println(nilai);
} else {
  digitalWrite(led , HIGH);
  Serial.print("LED MATI : ");
  Serial.println(nilai);
}
}
