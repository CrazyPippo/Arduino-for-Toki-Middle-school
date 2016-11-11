int ledPins[] = {13,12,11,10,9,8};
int period = 200;
void setup() {
  // output mode
  for(int i = 0; i < 6; i++){
    pinMode(ledPins[i], OUTPUT);
  }

}

void loop() {
  //oneAfterAnother();
  //pingPong();
  marquee();
}

void oneAfterAnother(){
  // all leds on
  for(int i = 0; i <= 6; i++)
  {
  digitalWrite(ledPins[i], HIGH);
  delay(period);
  }

  // all leds off
  for(int i = 0; i <= 6; i++)
  {
  digitalWrite(ledPins[7 - i], LOW);
  delay(period);
  }
}

void pingPong()
{
  int index;
  int delayTime = 100; // milliseconds to pause between LEDs
                       // make this smaller for faster switching
  
  // step through the LEDs, from 0 to 7
  
  for(index = 0; index <= 5; index++)
  {
    digitalWrite(ledPins[index], HIGH);  // turn LED on
    delay(delayTime);                    // pause to slow down
    digitalWrite(ledPins[index], LOW);   // turn LED off
  }

  // step through the LEDs, from 7 to 0
  
  for(index = 5; index >= 0; index--)
  {
    digitalWrite(ledPins[index], HIGH);  // turn LED on
    delay(delayTime);                    // pause to slow down
    digitalWrite(ledPins[index], LOW);   // turn LED off
  }
}

void marquee()
{
  int index;
  int delayTime = 200; // milliseconds to pause between LEDs
                       // Make this smaller for faster switching
  
  // Step through the first four LEDs
  // (We'll light up one in the lower 4 and one in the upper 4)
  
  for(index = 0; index <= 1; index++) // Step from 0 to 3
  {
    digitalWrite(ledPins[index], HIGH);    // Turn a LED on
    digitalWrite(ledPins[index+4], HIGH);  // Skip four, and turn that LED on
    delay(delayTime);                      // Pause to slow down the sequence
    digitalWrite(ledPins[index], LOW);     // Turn the LED off
    digitalWrite(ledPins[index+4], LOW);   // Skip four, and turn that LED off
  }
}


