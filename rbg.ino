const int ledpin =13;
const int ldrpin=A0;
   void setup()
    { 
    Serial.begin(9600);  
    pinMode(ldrpin,INPUT);
    pinMode(ledpin,OUTPUT);
   }
  void loop()
 {
  int ldrvalue=analogRead(ldrpin);
  
  if(ldrvalue>400) 
 {    digitalWrite(ledpin, HIGH);
     if(ldrvalue>=400&& ldrvalue <=510)
      Serial.println("It is blue colour");
     else if(ldrvalue>=510 && ldrvalue<=600)
      Serial.println("It is Green colour");
     else 
      Serial.println("It is Red colour");
  }
  else
  { digitalWrite(ledpin,LOW);
    Serial.println("LDR low off");
    } 
   Serial.println("The value of the LDR sensor is::");
   Serial.println(ldrvalue);
   delay(50); } 
  
