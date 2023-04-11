#define L1 2
#define L2 3
#define L3 4
#define L4 5
#define BZ 6
#define BT1 7

bool value = false;

void setup() {
  pinMode(L1,OUTPUT);digitalWrite(L1,LOW);
  pinMode(L2,OUTPUT);digitalWrite(L2,LOW);
  pinMode(L3,OUTPUT);digitalWrite(L3,LOW);
  pinMode(L4,OUTPUT);digitalWrite(L4,LOW);
  pinMode(BZ,OUTPUT);digitalWrite(BZ,LOW);
  
  pinMode(BT1,INPUT);
  
}

void loop() {
  
  
  digitalWrite(BZ,LOW);
  
  
  do{
    digitalWrite(L1,HIGH);digitalWrite(L2,LOW);
    digitalWrite(L3,LOW);digitalWrite(L4,LOW);
    
    value = digitalRead(BT1);delay(50);
    
  }while(value == false);

  
  
do{
    digitalWrite(L1,LOW);digitalWrite(L2,HIGH);
    digitalWrite(L3,LOW);digitalWrite(L4,LOW);
  
    value = digitalRead(BT1);delay(50);
  
  
}while(value == false);

  
do{
    digitalWrite(L1,LOW);digitalWrite(L2,LOW);
    digitalWrite(L3,HIGH);digitalWrite(L4,LOW);
      
    value = digitalRead(BT1);delay(50);
      
    if(value==true){
      digitalWrite(BZ,HIGH);delay(50);digitalWrite(BZ,LOW);
      }
      
    }while(value == false);
  
  

    do
    {
    digitalWrite(L1,LOW);digitalWrite(L2,LOW);
    digitalWrite(L3,LOW);digitalWrite(L4,HIGH);
      
    value = digitalRead(BT1);delay(50);
      
    if(value==true){
      digitalWrite(BZ,HIGH);delay(50);digitalWrite(BZ,LOW);
      }
      
    }while(value == false);
  
  
    
    
}
