#define BT1 8
#define BT2 7
#define BT3 6
#define BT4 5
#define LED1 4



void setup()
{
  pinMode(BT1,INPUT);
  pinMode(BT2,INPUT);
  pinMode(BT3,INPUT);
  pinMode(LED1,OUTPUT);digitalWrite(LED1,LOW);
}

void loop()
{
  bool A = digitalRead(BT1); 
  bool B = digitalRead(BT2); 
  bool C = digitalRead(BT3);
  bool D = digitalRead(BT4);
  
  delay(50);
  
//1
  if (A==false && B==false && C==false && D==false){
  digitalWrite(LED1,HIGH);
  }
  
  //2
    else if(A==false && B==false && C==false && D==true){
    digitalWrite(LED1,LOW);
  }
  
  //3
   else if(A==false && B==false && C==true && D==false){
    digitalWrite(LED1,HIGH);
  }
  
  //4
   else if(A==false && B==false && C==true && D==true){
    digitalWrite(LED1,HIGH);
  }
  
  //5
   else if(A==false && B==true && C==false && D==false){
    digitalWrite(LED1,HIGH);
  }
  
  //6
   else if(A==false && B==true && C==false && D==true){
    digitalWrite(LED1,HIGH);
   }
  //7
   else if(A==false && B==true && C==true && D==false){
    digitalWrite(LED1,HIGH);
  }   
     
  //8
   else if(A==false && B==true && C==true && D==true){
    digitalWrite(LED1,LOW);
  } 
     
  //9
   else if(A==true && B==false && C==false && D==false){
    digitalWrite(LED1,HIGH);
  }
     
  //10
   else if(A==true && B==false && C==false && D==true){
    digitalWrite(LED1,LOW);
  }
     
  //11
   else if(A==true && B==false && C==true && D==false){
    digitalWrite(LED1,HIGH);
  }
     
  //12
   else if(A==true && B==false && C==true && D==true){
    digitalWrite(LED1,LOW);
  } 
     
  //13
   else if(A==true && B==true && C==false && D==false){
    digitalWrite(LED1,HIGH);
  }
     
  //14
   else if(A==true && B==true && C==false && D==true){
    digitalWrite(LED1,HIGH);
  }   

  //15
   else if(A==true && B==true && C==true && D==false){
    digitalWrite(LED1,HIGH);
  }  
   
   //16
   else if(A==true && B==true && C==true && D==true){
    digitalWrite(LED1,HIGH);
  }      
 
   
}
