const int A = 2;          // donar nom al pin 5 de l’Arduino
const int B = 3;          // donar nom al pin 6 de l’Arduino
const int C = 4;          // donar nom al pin 7 de l’Arduino
const int D = 5;          // donar nom al pin 8 de l’Arduino
const int E = 6;          // donar nom al pin 9 de l’Arduino
const int F = 7;         // donar nom al pin 10 de l’Arduino
const int G = 9;         // donar nom al pin 11 de l’Arduino
const int buttonPin = 10;     // donar nom al pin 2 de l’Arduino
int delayA = 100;
//********** Setup ****************************************************************
void setup()
{
  pinMode(A, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(B, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(C, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(D, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(E, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(F, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(G, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(buttonPin, INPUT); // definir el pin 2 com una entrada  
}
//********** Loop *****************************************************************
void loop()
{
  digitalWrite(A, HIGH);     
  digitalWrite(B, HIGH);    
  digitalWrite(C, HIGH);     
  digitalWrite(D, HIGH);     
  digitalWrite(E, HIGH);    
  digitalWrite(F, HIGH);    
  digitalWrite(G, LOW);      
  
  delay(delayA);                 
  
  digitalWrite(A, LOW);    
  digitalWrite(B, HIGH);     
  digitalWrite(C, HIGH);    
  digitalWrite(D, LOW);  
  digitalWrite(E, LOW);    
  digitalWrite(F, LOW);   
  digitalWrite(G, LOW);      
  
  delay(delayA);                  

  digitalWrite(A, HIGH);     
  digitalWrite(B, HIGH);    
  digitalWrite(C, LOW);     
  digitalWrite(D, HIGH);     
  digitalWrite(E, HIGH);    
  digitalWrite(F, LOW);    
  digitalWrite(G, HIGH);      
  
  delay(delayA);                 

  digitalWrite(A, HIGH);     
  digitalWrite(B, HIGH);    
  digitalWrite(C, HIGH);     
  digitalWrite(D, HIGH);     
  digitalWrite(E, LOW);    
  digitalWrite(F, LOW);    
  digitalWrite(G, HIGH);     
  
  delay(delayA);                 

  digitalWrite(A, LOW);     
  digitalWrite(B, HIGH);    
  digitalWrite(C, HIGH);     
  digitalWrite(D, LOW);     
  digitalWrite(E, LOW);    
  digitalWrite(F, HIGH);    
  digitalWrite(G, HIGH);     
  
  delay(delayA);                 
  
  digitalWrite(A, HIGH);     
  digitalWrite(B, LOW);    
  digitalWrite(C, HIGH);     
  digitalWrite(D, HIGH);     
  digitalWrite(E, LOW);    
  digitalWrite(F, HIGH);    
  digitalWrite(G, HIGH);        

  delay(delayA);                  

  digitalWrite(A, LOW);     
  digitalWrite(B, LOW);    
  digitalWrite(C, HIGH);     
  digitalWrite(D, HIGH);     
  digitalWrite(E, HIGH);    
  digitalWrite(F, HIGH);    
  digitalWrite(G, HIGH);      

  delay(delayA);                 

  digitalWrite(A, HIGH);     
  digitalWrite(B, HIGH);    
  digitalWrite(C, HIGH);     
  digitalWrite(D, LOW);     
  digitalWrite(E, LOW);    
  digitalWrite(F, LOW);    
  digitalWrite(G, LOW);      
  
    delay(delayA);                

  digitalWrite(A, HIGH);     
  digitalWrite(B, HIGH);    
  digitalWrite(C, HIGH);     
  digitalWrite(D, HIGH);     
  digitalWrite(E, HIGH);    
  digitalWrite(F, HIGH);    
  digitalWrite(G, HIGH);    

    delay(delayA);                
    
  digitalWrite(A, HIGH);     
  digitalWrite(B, HIGH);    
  digitalWrite(C, HIGH);     
  digitalWrite(D, LOW);     
  digitalWrite(E, LOW);    
  digitalWrite(F, HIGH);    
  digitalWrite(G, HIGH);    

    delay(delayA);      
          }
