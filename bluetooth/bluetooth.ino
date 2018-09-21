int motrf=7;
int motlf=8;
int motrb=3;
int motlb=4;
int en1=5;
int en2=6;
char intake;

void setup() {
  pinMode(motrf,OUTPUT);// put your setup code here, to run once:
   pinMode(motrb,OUTPUT);
    pinMode(motlf,OUTPUT);
     pinMode(motlb,OUTPUT);
     pinMode(en1,OUTPUT);
     pinMode(en2,OUTPUT);
     digitalWrite(en1,HIGH);
      digitalWrite(en2,HIGH);
      Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0)
  {
    intake=Serial.read();
    
  
 switch(intake)
 {
  case 'F':
  {
  digitalWrite(motrf,HIGH);
    digitalWrite(motrb,LOW);
    digitalWrite(motlf,HIGH);
    
    digitalWrite(motlb,LOW);
       Serial.println("forward");
       break;
  }
       case 'L':
       {
       digitalWrite(motrf,HIGH);
    digitalWrite(motrb,LOW);
    digitalWrite(motlf,LOW);
    
    digitalWrite(motlb,HIGH);
       Serial.println("left");
           break;
       }
       case 'R':
       {
        digitalWrite(motrf,LOW);
    digitalWrite(motrb,HIGH);
    digitalWrite(motlf,HIGH);
    
    digitalWrite(motlb,LOW);
    Serial.println("right");
        break;
       }
       case'B':
       {
         digitalWrite(motrf,LOW);
    digitalWrite(motrb,HIGH);
    digitalWrite(motlf,LOW);
    
    digitalWrite(motlb,HIGH);
       Serial.println("back");
           break;
       }
       case 'S':
       {
        digitalWrite(motrf,LOW);
    digitalWrite(motrb,LOW);
    digitalWrite(motlf,LOW);
    
    digitalWrite(motlb,LOW);
       Serial.println("stop");
           break;
       }
 }
       
}
}
