//Prueba 1: con Arduino
//Encendido y apagado de un LED

void setup() 
{
  pinMode(12,OUTPUT);//COnfig. pin 12 como salida digital
}

void loop() 
{
  digitalWrite(12,HIGH);//Mandar un 1 lógico al pin 12
  delay(500);//Retardo de 500 milisegundos (0.5 s)
  digitalWrite(12,LOW); //Mandar un 0 lógico al pin 12
  delay(500);
}
