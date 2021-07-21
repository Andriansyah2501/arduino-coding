void setup() {
  //pin 2 s/d pin 13 sebagai dig output
  for(char i=2;i<14;i++){
    pinMode(i,OUTPUT);
  }
  //Matikan semua LED
  for(char i=2;i<14;i++){
    digitalWrite(i,0);
  }
  //hidupkan H1 + M2 + M3 + M4
  digitalWrite(2,1);
  digitalWrite(7,1);
  digitalWrite(10,1);
  digitalWrite(13,1); 
}

void loop() {
  // H1 + M2 + M3 + M4 ON
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,0);
  delay(5000);

   //K1 + M2 + M3 +M4 ON
   digitalWrite(2,0);
   digitalWrite(3,1);
   digitalWrite(4,0);
   delay(2000);

   // M1 + M2 + M3 + M4 ON
   digitalWrite(2,0);
   digitalWrite(3,0);
   digitalWrite(4,1);
   delay(1000);

   // M1 + H2 + M3 + M4 ON
   digitalWrite(5,1);
   digitalWrite(6,0);
   digitalWrite(7,0);
   delay(5000);

   // M1 + K2 + M3 + M4 ON
   digitalWrite(5,0);
   digitalWrite(6,1);
   digitalWrite(7,0);
   delay(2000);

   // M1 + M2 + M3 + M4 ON
   digitalWrite(5,0);
   digitalWrite(6,0);
   digitalWrite(7,1);
   delay(1000);

   // M1 + M2 + H3 + M4 ON
   digitalWrite(8,1);
   digitalWrite(9,0);
   digitalWrite(10,0);
   delay(5000);

   // M1 + M2 + K3 + M4 ON
   digitalWrite(8,0);
   digitalWrite(9,1);
   digitalWrite(10,0);
   delay(2000);

   // M1 + M2 + M3 + M4 ON
   digitalWrite(8,0);
   digitalWrite(9,0);
   digitalWrite(10,1);
   delay(1000);

   // M1 + M2 + M3 + H4 ON
   digitalWrite(11,1);
   digitalWrite(12,0);
   digitalWrite(13,0);
   delay(5000);

   // M1 + M2 + M3 + K4 ON
   digitalWrite(11,0);
   digitalWrite(12,1);
   digitalWrite(13,0);
   delay(2000);

   // M1 + M2 + M3 + M4 ON
   digitalWrite(11,0);
   digitalWrite(12,0);
   digitalWrite(13,1);
   delay(1000);


}
   
