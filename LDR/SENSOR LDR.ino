#include <LiquidCrystal.h>

//inisialisasi koneksi pin LCD dengann Pin arduino

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int ldr = A0;
const int relay = 6;
const int led1 = 8;
const int led2 = 9;

void setup(){
  // inisialisasikan LCD yang digunakan
  lcd.begin(16, 2);
  lcd.print("KONDISI LAMPU :");
  pinMode(relay,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int nilai = analogRead(ldr);//baca nilai sensor
  Serial.print("NILAI LDR: "); // cetak texk "Nilai LDR" pada serial Monitor
  Serial.println(nilai);//cetak nilai sensor ldr pada serial monitor
  lcd.setCursor(0, 1);
  lcd.print(nilai);

  if (nilai <650){
  digitalWrite(relay, HIGH);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  Serial.print("LEd hidup : ");
  lcd.print("_Lampu Hidup");
  Serial.println(nilai);
 delay(300);
} else {

digitalWrite(relay, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led1, HIGH);
lcd.print("_Lampu Mati ");

Serial.print("LED Mati : ");

Serial.println(nilai);
}
}
 
