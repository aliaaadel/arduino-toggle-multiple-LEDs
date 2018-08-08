char LED[]={2,3,4};
#define button 6
int buttonstate;
int ledstate;
 
 void setup() {
  // put your setup code here, to run once:
  for (i = 0 ; i<3; i++){
   pinMode(LED[i], INPUT)
  pinMode(button,INPUT);
}

void loop() {
  buttonstate = digitalRead(button); //that's the buutton debounce
  if (buttonstate == 1){
    delay(30);
    buttonstate = digitalRead(button);
    if (buttonstate == 0){
       ledstate++;
    }
    
  }
  else{
    delay(100);}
  whille(ledstate<4){
     digitalWrite()}

}
  
