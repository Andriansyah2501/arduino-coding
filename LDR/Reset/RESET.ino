void(*mulai_reset) (void) = 0; //perintah reset

void setup(){
Serial.begin(9600);
Serial.println("Coba Reset");
delay(1000);
}

void loop(){
Serial.println("Tes Reset");
delay(1000);
Serial.println("Reset");
Serial.println();
delay(1000);
mulai_reset();  //fungsi reset

Serial.println("Umpamakan teks ini bagian error-nya jadi tidak muncul");
}
