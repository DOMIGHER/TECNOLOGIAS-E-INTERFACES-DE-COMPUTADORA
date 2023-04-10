//Prueba 3.1 en Arduino
//Encendido y apagado de LED con botón

#define LED 2
#define BTN 7

void setup() 
{
  pinMode(LED,OUTPUT);digitalWrite(LED,LOW);
  pinMode(BTN,INPUT);//Declarar Pin 7 (BTN) como entrada digital
}

bool value=false;

void loop() 
{
    value = digitalRead(BTN);//Leer pin 7 (BTN)
    delay(50);

    if(value == true)//Si se presiona el botón...
      digitalWrite(LED,HIGH);
    else // En caso contrario...
      digitalWrite(LED,LOW);
}
