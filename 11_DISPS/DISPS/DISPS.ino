//Prueba 11 en Arduino
//Conexión de C.I.'s 74HC595 en cadena

#define CLOCK 4
#define LATCH 3
#define DATA 2

void setup(){
  pinMode(CLOCK,OUTPUT);digitalWrite(CLOCK, LOW);
  pinMode(LATCH,OUTPUT);digitalWrite(LATCH,HIGH);
  pinMode(DATA,OUTPUT);digitalWrite(DATA,LOW);
}

void loop() {
   digitalWrite(LATCH,LOW);
   shiftOut(DATA,CLOCK,MSBFIRST,0b01111110); //Cátodo común (forma 0)
// shiftOut(DATA,CLOCK,MSBFIRST,0b10000001); //Ánodo común (forma 0)
   shiftOut(DATA,CLOCK,MSBFIRST,0b00001100); //Cátodo común (forma 1)
// shiftOut(DATA,CLOCK,MSBFIRST,0b11110011); //Ánodo común (forma 1)
   digitalWrite(LATCH,HIGH); 
 
 /*
  digitalWrite(LATCH,LOW);shiftOut(DATA,CLOCK,MSBFIRST,0b01111110);
  digitalWrite(LATCH,HIGH);delay(2000);
  digitalWrite(LATCH,LOW);shiftOut(DATA,CLOCK,MSBFIRST,0b00001100);
  digitalWrite(LATCH,HIGH);delay(2000);
  digitalWrite(LATCH,LOW);shiftOut(DATA,CLOCK,MSBFIRST,0xFF);
  digitalWrite(LATCH,HIGH);delay(2000);  
  */
  
  /*
  digitalWrite(LATCH,LOW);
  shiftOut(DATA,CLOCK,MSBFIRST,0b01111110);//Cátodo común (Forma 0)
//shiftOut(DATA,CLOCK,MSBFIRST,0b10000001);//Ánodo común (Forma 0)
  digitalWrite(LATCH,HIGH);delay(2000);
  digitalWrite(LATCH,LOW);
  shiftOut(DATA,CLOCK,MSBFIRST,0b00001100);//Cátodo común (Forma 1)
//shiftOut(DATA,CLOCK,MSBFIRST,0b11110011);//Ánodo común (Forma 1)
  digitalWrite(LATCH,HIGH);delay(2000);
  */
}
