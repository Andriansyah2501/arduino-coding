const int pinMerah = 9  ;
const int pinHijau = 11 ;

const int pinKuning = 10 ;

void  setup (){
  //inisialisasi digitalpin 9,10,11 sebagai output
  pinMode(pinMerah, OUTPUT);
  pinMode(pinKuning, OUTPUT);
  pinMode(pinHijau, OUTPUT);
    
}
 void loop() {
  //lampu hijau nyala 4 detik yanglain mati
  digitalWrite(pinMerah,LOW);
  digitalWrite(pinKuning,LOW);
  digitalWrite(pinHijau,HIGH);
  delay(4000);
  //lampu kuning nyala 2 detik yang lain mati
  digitalWrite(pinMerah,LOW);
  digitalWrite(pinKuning,HIGH);
  digitalWrite(pinHijau,LOW);
  delay(2000);
  //lampu merah nyala 5 detik yang lain mati
  digitalWrite(pinMerah,HIGH);
  digitalWrite(pinKuning,LOW);
  digitalWrite(pinHijau,LOW);
  delay(5000);
 }
