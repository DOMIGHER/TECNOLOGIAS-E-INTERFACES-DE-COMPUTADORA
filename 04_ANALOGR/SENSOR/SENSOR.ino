//Prueba 4 en Arduino
// A0 Lectura de sensores analógicos (Potenciómetro - Aumento)
// A1 Lectura de sensores analógicos (Fotorresistor - Luz)
// A2 Lectura de sensores analógicos (LM35 - Temperatura)

#define SENSOR A0
#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5
/*
 A0: Potenciómetro
 A1: Fotorresistencia (LDR)
 A3: LM35 (Sensor de Temp.) 
 */

void setup() {
  pinMode(LED1,OUTPUT);digitalWrite(LED1,LOW);
  pinMode(LED2,OUTPUT);digitalWrite(LED2,LOW);
  pinMode(LED3,OUTPUT);digitalWrite(LED3,LOW);
  pinMode(LED4,OUTPUT);digitalWrite(LED4,LOW);
  Serial.begin(9600); //Habilitar funciones seriales de la tarjeta
  //Nota: al activarlas, los pines 0 y 1 no funcionan como salidas dig.
}

int valor = 0;

void loop() 
{
  valor = analogRead(SENSOR); //Leer señal proveniente del canal SENSOR
  delay(100);
  Serial.println("VALOR DEL SENSOR: " + String(valor));
  delay(100);

  if(valor >=0 && valor <= 255)
  {
    digitalWrite(LED1,HIGH);digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);digitalWrite(LED4,LOW);  
  }

  else if(valor >=256 && valor <= 511)
  {
    digitalWrite(LED1,HIGH);digitalWrite(LED2,HIGH);
    digitalWrite(LED3,LOW);digitalWrite(LED4,LOW);  
  }

  else if(valor >=512 && valor <= 767)
  {
    digitalWrite(LED1,HIGH);digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);digitalWrite(LED4,LOW);  
  }

  else
  {
    digitalWrite(LED1,HIGH);digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);digitalWrite(LED4,HIGH);
  }
}
