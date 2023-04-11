//Prueba 5 en Arduino
//Configuración de Sensor Ultrasónico HC-SR04

#define ECHO 8 //Echo: Receptor
#define TRIG 7 //Trigger: emisor
#define BUZZ 6 //Buzzer: alarma
#define DIS1 5 //LED: Distancia 1 (Muy cerca)
#define DIS2 4 //LED: Distancia 2 (Cerca)
#define DIS3 3 //LED: Distancia 3 (Lejos)
#define DIS4 2 //LED: Distancia 4 (Muy Lejos)

void setup() {
  Serial.begin(9600);
  pinMode(ECHO,INPUT); //Echo como entrada digital
  pinMode(TRIG,OUTPUT);digitalWrite(TRIG,LOW);//Trigger como salida digital
  pinMode(DIS1,OUTPUT);digitalWrite(DIS1,LOW);
  pinMode(DIS2,OUTPUT);digitalWrite(DIS2,LOW);
  pinMode(DIS3,OUTPUT);digitalWrite(DIS3,LOW);
  pinMode(DIS4,OUTPUT);digitalWrite(DIS4,LOW);
  pinMode(BUZZ,OUTPUT);digitalWrite(BUZZ,LOW);
}

float duracion = 0.0;
float distancia = 0.0;

void loop() {
  //Emitir una señal ultrasónica desde trigger
  digitalWrite(TRIG,LOW);delayMicroseconds(2);
  digitalWrite(TRIG,HIGH);delayMicroseconds(10);
  digitalWrite(TRIG,LOW);

  duracion = pulseIn(ECHO,HIGH);//;Medir el tiempo entre LOW y HIGH
  distancia = (duracion/2.0)/29.0; //Fórmula para dist. en cm/s
  Serial.println("DISTANCIA: " + String(distancia) + " cm");

  if(distancia >= 0.0 && distancia<= 20.0)
  {
    digitalWrite(DIS1,HIGH);digitalWrite(DIS2,LOW);
    digitalWrite(DIS3,LOW);digitalWrite(DIS4,LOW);
    digitalWrite(BUZZ,HIGH);delay(50);
    digitalWrite(BUZZ,LOW);delay(50);  
  }

  else if (distancia >= 21.0 && distancia <=40.0)
  {
    digitalWrite(DIS1,LOW);digitalWrite(DIS2,HIGH);
    digitalWrite(DIS3,LOW);digitalWrite(DIS4,LOW);
    digitalWrite(BUZZ,HIGH);delay(100);
    digitalWrite(BUZZ,LOW);delay(100);
  }

  else if (distancia >= 41.0 && distancia <=60.0)
  {
    digitalWrite(DIS1,LOW);digitalWrite(DIS2,LOW);
    digitalWrite(DIS3,HIGH);digitalWrite(DIS4,LOW);
    digitalWrite(BUZZ,LOW);
  }

  else if (distancia >= 61.0)
  {
    digitalWrite(DIS1,LOW);digitalWrite(DIS2,LOW);
    digitalWrite(DIS3,LOW);digitalWrite(DIS4,HIGH);
    digitalWrite(BUZZ,LOW);
  }
}
