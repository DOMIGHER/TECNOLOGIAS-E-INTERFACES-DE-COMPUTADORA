#define BTA 1
#define BTB 2
#define BTC 3
#define BTD 4

#define LEDADE 5
#define LEDATR 6
#define LEDIZQ 8
#define LEDDER 7

#define LEDADEMOT 9 
#define LEDATRMOT 10



void setup()
{
  pinMode(BTA,INPUT);
  pinMode(BTB,INPUT);
  pinMode(BTC,INPUT);
  pinMode(BTD,INPUT);
  
   pinMode(LEDADE,OUTPUT);digitalWrite(LEDADE,LOW);
   pinMode(LEDATR,OUTPUT);digitalWrite(LEDATR,LOW);
   pinMode(LEDIZQ,OUTPUT);digitalWrite(LEDIZQ,LOW);
   pinMode(LEDDER,OUTPUT);digitalWrite(LEDDER,LOW);
  
   pinMode(LEDADEMOT,OUTPUT);digitalWrite(LEDADEMOT,LOW);
   pinMode(LEDATRMOT,OUTPUT);digitalWrite(LEDATRMOT,LOW);
   
}



bool va = false;
bool vb = false;
bool vc = false;
bool vd = false;




void loop()
{
  va = digitalRead(BTA);

  
  vb = digitalRead(BTB);

  
  vc = digitalRead(BTC);

  
  vd = digitalRead(BTD);
  delay(75);
  
  
   if(va==false && vb==false && vc==false && vd==false){
  digitalWrite(LEDADE,HIGH);
  digitalWrite(LEDATR,LOW);
  digitalWrite(LEDIZQ,LOW);
  digitalWrite(LEDDER,LOW);
    
  digitalWrite(LEDADEMOT,HIGH);
  digitalWrite(LEDATRMOT,HIGH);
  
   }
  
  //2
  else if(va==false && vb==false && vc==false && vd==true){
  digitalWrite(LEDADE,LOW);
  digitalWrite(LEDATR,LOW);
  digitalWrite(LEDIZQ,LOW);
  digitalWrite(LEDDER,LOW);
    
  digitalWrite(LEDADEMOT,LOW);
  digitalWrite(LEDATRMOT,LOW);
  
  }
               
  //3
  else if(va==false && vb==false && vc==true && vd==false){
  digitalWrite(LEDADE,LOW);
  digitalWrite(LEDATR,LOW);
  digitalWrite(LEDIZQ,LOW);
  digitalWrite(LEDDER,LOW);
    
  digitalWrite(LEDADEMOT,LOW);
  digitalWrite(LEDATRMOT,LOW);
  
  }
               
  //4
  else if(va==false && vb==false && vc==true && vd==true){
  digitalWrite(LEDADE,LOW);
  digitalWrite(LEDATR,LOW);
  digitalWrite(LEDIZQ,LOW);
  digitalWrite(LEDDER,LOW);
    
  digitalWrite(LEDADEMOT,LOW);
  digitalWrite(LEDATRMOT,LOW);
  
  }



   //5
  else if(va==false && vb==true && vc==false && vd==false){
  digitalWrite(LEDADE,LOW);
  digitalWrite(LEDATR,LOW);
  digitalWrite(LEDIZQ,HIGH);
  digitalWrite(LEDDER,LOW);
    
  digitalWrite(LEDADEMOT,LOW);
  digitalWrite(LEDATRMOT,HIGH);
    
  }
  
  //6
  else if(va==false && vb==true && vc==false && vd==true){
  digitalWrite(LEDADE,LOW);
  digitalWrite(LEDATR,LOW);
  digitalWrite(LEDIZQ,LOW);
  digitalWrite(LEDDER,LOW);
    
  digitalWrite(LEDADEMOT,LOW);
  digitalWrite(LEDATRMOT,LOW);
  
  }
               
  //7
  else if(va==false && vb==true && vc==true && vd==false){
  digitalWrite(LEDADE,LOW);
  digitalWrite(LEDATR,LOW);
  digitalWrite(LEDIZQ,LOW);
  digitalWrite(LEDDER,LOW);
    
  digitalWrite(LEDADEMOT,LOW);
  digitalWrite(LEDATRMOT,LOW);
  
  }
               
  //8
  else if(va==false && vb==true && vc==true && vd==true){
  digitalWrite(LEDADE,LOW);
  digitalWrite(LEDATR,LOW);
  digitalWrite(LEDIZQ,LOW);
  digitalWrite(LEDDER,LOW);
    
  digitalWrite(LEDADEMOT,LOW);
  digitalWrite(LEDATRMOT,LOW);
  
  }



  //9
  else if(va==true && vb==false && vc==false && vd==false){
  digitalWrite(LEDADE,LOW);
  digitalWrite(LEDATR,LOW);
  digitalWrite(LEDIZQ,LOW);
  digitalWrite(LEDDER,HIGH);
    
  digitalWrite(LEDADEMOT,HIGH);
  digitalWrite(LEDATRMOT,LOW);
   
  }
  
  //10
  else if(va==true && vb==false && vc==false && vd==true){
  digitalWrite(LEDADE,LOW);
  digitalWrite(LEDATR,LOW);
  digitalWrite(LEDIZQ,LOW);
  digitalWrite(LEDDER,LOW);
    
  digitalWrite(LEDADEMOT,LOW);
  digitalWrite(LEDATRMOT,LOW);
 
  }
               
  //11
  else if(va==true && vb==false && vc==true && vd==false){
  digitalWrite(LEDADE,LOW);
  digitalWrite(LEDATR,LOW);
  digitalWrite(LEDIZQ,LOW);
  digitalWrite(LEDDER,LOW);
    
  digitalWrite(LEDADEMOT,LOW);
  digitalWrite(LEDATRMOT,LOW);
  
  }
               
  //12
  else if(va==true && vb==false && vc==true && vd==true){
  digitalWrite(LEDADE,LOW);
  digitalWrite(LEDATR,LOW);
  digitalWrite(LEDIZQ,LOW);
  digitalWrite(LEDDER,LOW);
    
  digitalWrite(LEDADEMOT,LOW);
  digitalWrite(LEDATRMOT,LOW);
  
  }





 //13
  else if(va==true && vb==true && vc==false && vd==false){
  digitalWrite(LEDADE,LOW);
  digitalWrite(LEDATR,HIGH);
  digitalWrite(LEDIZQ,LOW);
  digitalWrite(LEDDER,LOW);
    
  digitalWrite(LEDADEMOT,HIGH);
  digitalWrite(LEDATRMOT,HIGH);
    
  }
  
  //14
  else if(va==true && vb==true && vc==false && vd==true){
  digitalWrite(LEDADE,LOW);
  digitalWrite(LEDATR,LOW);
  digitalWrite(LEDIZQ,LOW);
  digitalWrite(LEDDER,LOW);
    
  digitalWrite(LEDADEMOT,LOW);
  digitalWrite(LEDATRMOT,LOW);
  
  }
               
  //15
  else if(va==true && vb==true && vc==true && vd==false){
  digitalWrite(LEDADE,LOW);
  digitalWrite(LEDATR,LOW);
  
    
  digitalWrite(LEDADEMOT,LOW);
  digitalWrite(LEDATRMOT,LOW);
 
  }
               
  //16
  else if(va==true && vb==true && vc==true && vd==true){
  digitalWrite(LEDADE,LOW);
  digitalWrite(LEDATR,LOW);
  digitalWrite(LEDIZQ,LOW);
  digitalWrite(LEDDER,LOW);
    
  digitalWrite(LEDADEMOT,LOW);
  digitalWrite(LEDATRMOT,LOW);
  
  }
  
               
      
  
}
