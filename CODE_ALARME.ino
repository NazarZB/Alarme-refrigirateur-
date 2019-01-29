int temps = 0;

void setup() {

Serial.begin(9600);
pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int value = analogRead(0);
  
  Serial.println(temps);

 delay (1000);
   
  if(value > 5){
    
    temps++;
    
    }
    

  if(temps > 30){ 
    
    
   digitalWrite(8,HIGH);
  }
   else {
    
   digitalWrite(8,LOW);
   }
   
 if(value ==0){
  
   digitalWrite(8, LOW);
   temps=0;


  }
}


   
    



  
  
