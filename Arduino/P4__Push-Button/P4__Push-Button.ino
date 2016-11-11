int buttonPin = 8;
//int LEDPins[] = {13, 12, 11, 10};
int led = 13;
int period = 500;
void setup() {
  // set mode
  pinMode(buttonPin, INPUT);
  pinMode(led,OUTPUT);
//  for(int i = 0; i < 4; i++)
//    pinMode(LEDPins[i], OUTPUT);

}

void loop() {
  // read if the button is pushed or not
  int buttonState = digitalRead(buttonPin);
  
  if(buttonState == LOW){
//    for(int i = 0; i < 4; i++){
//      digitalWrite(LEDPins[i], HIGH);
//      ///delay(period);
//    }
    digitalWrite(led, HIGH);
  }
  else{
//    for(int i = 0; i < 4; i++)
//      digitalWrite(LEDPins[i], LOW);
    digitalWrite(led, LOW);

}
}
