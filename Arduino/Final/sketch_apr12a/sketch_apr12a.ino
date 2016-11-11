const int red_pin = 13;
const int green_pin = 12;
const int blue_pin = 11;
const int button_pin = 2;
const int led_pin = 7;
const int resistor_pin = 0;
int period = 0;

void setup() {
  pinMode(red_pin, OUTPUT);
  pinMode(green_pin, OUTPUT);
  pinMode(blue_pin, OUTPUT);
  pinMode(led_pin, OUTPUT);
  pinMode(button_pin, INPUT);

}

void loop() {
  period = analogRead(resistor_pin);
  changeColor();
 
}


void changeColor(){
   // Off (all LEDs off):

  digitalWrite(red_pin, LOW);
  digitalWrite(green_pin, LOW);
  digitalWrite(blue_pin, LOW);

  delay(period);

  // Red (turn just the red LED on):

  digitalWrite(red_pin, HIGH);
  digitalWrite(green_pin, LOW);
  digitalWrite(blue_pin, LOW);

  delay(period);

  // Green (turn just the green LED on):

  digitalWrite(red_pin, LOW);
  digitalWrite(green_pin, HIGH);
  digitalWrite(blue_pin, LOW);
  
  for(int i = 0; i < period; i++){
    delay(1);
    int buttonState = digitalRead(button_pin);
    if(buttonState == LOW){
      digitalWrite(led_pin, HIGH);
      delay(1000);
      digitalWrite(led_pin,LOW);
      break;
   }
    else{
      digitalWrite(led_pin,LOW);
   }
  }
 

  

  // Blue (turn just the blue LED on):

  digitalWrite(red_pin, LOW);
  digitalWrite(green_pin, LOW);
  digitalWrite(blue_pin, HIGH);
  delay(period);
  
  

  // Yellow (turn red and green on):

  digitalWrite(red_pin, HIGH);
  digitalWrite(green_pin, HIGH);
  digitalWrite(blue_pin, LOW);

  delay(period);

  // Cyan (turn green and blue on):

  digitalWrite(red_pin, LOW);
  digitalWrite(green_pin, HIGH);
  digitalWrite(blue_pin, HIGH);

  delay(period);

  // Purple (turn red and blue on):

  digitalWrite(red_pin, HIGH);
  digitalWrite(green_pin, LOW);
  digitalWrite(blue_pin, HIGH);

  delay(period);

  // White (turn all the LEDs on):

  digitalWrite(red_pin, HIGH);
  digitalWrite(green_pin, HIGH);
  digitalWrite(blue_pin, HIGH);

  delay(period);
}

