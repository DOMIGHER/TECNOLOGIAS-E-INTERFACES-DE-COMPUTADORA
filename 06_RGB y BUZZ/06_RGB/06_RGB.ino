

//Prueba 6 en Arduino
//Señales PWM

#define LEDR 11 // LED RGB, sección rojo

void setup() {
  Serial.begin(9600);
  pinMode(LEDR,OUTPUT);digitalWrite(LEDR,LOW);
}

void loop() {
  
  
  analogWrite(LEDR,0);//Mandar señal PWM con 0% de ciclo de trabajo
  Serial.println("Duty Cycle: 0%");delay(1000);
  analogWrite(LEDR,64);//Mandar señal PWM con 25% de ciclo de trabajo
  Serial.println("Duty Cycle: 25%");delay(1000);
  analogWrite(LEDR,127);//Mandar señal PWM con 50% de ciclo de trabajo
  Serial.println("Duty Cycle: 50%");delay(1000);
  analogWrite(LEDR,191);//Mandar señal PWM con 75% de ciclo de trabajo
  Serial.println("Duty Cycle: 75%");delay(1000);
  
  analogWrite(LEDR,255);//Mandar señal PWM con 100% de ciclo de trabajo
  Serial.println("Duty Cycle: 100%");delay(1000);
}











/*
//Prueba 6A en Arduino
// Señales PWM 2

#define LEDG 10 //LED RGB, sección verde

void setup() {
  Serial.begin(9600);
  pinMode(LEDG,OUTPUT);digitalWrite(LEDG,LOW);
}

int x=0,y=0;

void loop() {
  for(x=0;x<=255;x++){
    Serial.println("Valor de PWM: " + String(x));
    analogWrite(LEDG,x);delay(25);  
  }
  for(y=255;y>=0;y--){
    Serial.println("Valor de PWM: " + String(y));
    analogWrite(LEDG,y);delay(25);
  }  
}*/














/*

//Prueba 6B en Arduino
//Señales PWM 3

#define LEDB 9 //LED RGB, sección azul
#define POT A0 //Potenciómetro, inyección de color

void setup() {
  Serial.begin(9600);
  pinMode(LEDB,OUTPUT);digitalWrite(LEDB,LOW);
}

int pot=0,pwm=0;

void loop(){
  pot = analogRead(POT); //leer señal del potenciómetro (0 - 1023)
  pwm = map(pot,0,1023,0,255);//Ajustar valores de una variable a valores deseados
  Serial.println("VALOR pot: "+String(pot)+" VALOR pwm: "+String(pwm));
  delay(50);
  analogWrite(LEDB,pwm);
}*/
