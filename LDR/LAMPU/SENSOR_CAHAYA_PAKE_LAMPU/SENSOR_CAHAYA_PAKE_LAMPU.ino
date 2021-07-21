#include <LiquidCrystal.h>

//inisialisasi koneksi pin LCD dengann Pin arduino

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int ldr = A0;
const int led = 6;

 

void setup(){
  // inisialisasikan LCD yang digunakan
  lcd.begin(16, 2);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
   
}

 
void loop(){
  int nilai = analogRead(ldr);//baca nilai sensor
  Serial.print("NILAI LDR: "); // cetak texk "Nilai LDR" pada serial Monitor
 
 
 
if (nilai <500)
{
lcd.setCursor(0,0);
lcd.print("Kondisi:");
lcd.setCursor(1,1);
lcd.print(nilai);
lcd.print(" Lampu Mati");
delay(200);
lcd.clear();
digitalWrite(led, LOW);

} else {

lcd.setCursor(0,0);
lcd.print("Kondisi:");
lcd.setCursor(1, 1);
lcd.print(nilai);
lcd.print(" Lampu Hidup ");
delay(200);
lcd.clear();
digitalWrite(led, HIGH);
}

}
