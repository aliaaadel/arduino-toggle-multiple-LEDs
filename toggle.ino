#define led1 2
#define led2 3
#define led3 4
#define button 6
int buttonstate;
int laststate;
int ledstate;
 
 void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(button,INPUT);
}

void loop() {
  buttonstate = digitalRead(button);
  if (buttonstate == 1){
    delay(30);
    buttonstate = digitalRead(button);
    if (buttonstate == 0){
       ledstate++;
    }
    else{
      ledstate=0
    }
  }
  else{
    delay(100);}
  if (ledstate == 1){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }
  if(ledstate == 2){
    
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
  }
  if (ledstate == 3){
    
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    ledstate = 0;
  }
}
  
