//Prueba 2 en Arduino
//Encendido/Apagado de LEDs

#define LED1 13
#define LED2 12

void setup() 
{
  pinMode(LED1,OUTPUT);digitalWrite(LED1,LOW);
  pinMode(LED2,OUTPUT);digitalWrite(LED2,LOW);
}

void loop() 
{
  digitalWrite(LED1,HIGH);digitalWrite(LED2,LOW);delay(500);
  digitalWrite(LED1,LOW);digitalWrite(LED2,HIGH);delay(500);
  digitalWrite(LED1,LOW);digitalWrite(LED2,LOW);delay(500);
  digitalWrite(LED1,HIGH);digitalWrite(LED2,HIGH);delay(500);
  digitalWrite(LED1,LOW);digitalWrite(LED2,LOW);delay(500);
}
