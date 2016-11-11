int brightness = 0;
const int LEDPin = 9;
const int sensorPin = 0;
const int lowerBound = 300;
const int upperBound = 800;
void setup() {
  pinMode(LEDPin, OUTPUT);

}

void loop() {
  brightness = analogRead(sensorPin);
  
    
  brightness = map(brightness, lowerBound, upperBound, 0, 255);
  brightness = constrain(brightness, 0, 255);
  
  analogWrite(LEDPin, brightness);

}
