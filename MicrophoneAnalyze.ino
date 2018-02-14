//inputs: six microphones (analog signals), outputs: digital signal

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT); //sets digital pin 2 to output
}
void loop() {
  // put your main code here, to run repeatedly:
  bool shot = 0;
  digitalWrite(2, LOW);

  int mic0, mic1, mic2, mic3, mic4, mic5;

  mic0 = analogRead(0);
  shot = analyzeMic0;
  
  mic1 = analogRead(1);
  shot = analyzeMic1;
  
  mic2 = analogRead(2);
  shot = analyzeMic2;
  
  mic3 = analogRead(3);
  shot = analyzeMic3;
  
  mic4 = analogRead(4);
  shot = analyzeMic4;
  
  mic5 = analogRead(5);
  shot = analyzeMic5;

  if(shot = 1){
    digitalWrite(2, HIGH); //sets pin 2 on
    delay(1000); //wait 1 second to ensure signal is recieved
  }

}
int analyzeMic0(int mic0){

  //analyze frequency, duration, and amplitude
  
  else
    return 0;
}
int analyzeMic1(int mic1){

  //analyze frequency, duration, and amplitude
   else
    return 0;
}
int analyzeMic2(int mic2){

  //analyze frequency, duration, and amplitude
  else
    return 0;
}
int analyzeMic3(int mic3){
  
  //analyze frequency, duration, and amplitude
  else
    return 0;
}
int analyzeMic4(int mic4){

  //analyze frequency, duration, and amplitude
  else
    return 0;
}
int analyzeMic5(int mic5){

  //analyze frequency, duration, and amplitude
  else
    return 0;
}

