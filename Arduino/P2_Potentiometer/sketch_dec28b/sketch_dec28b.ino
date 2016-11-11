int sensorPin = 0;
int ledPin = 13;
void setup() {
  pinMode(ledPin, OUTPUT);

}

void loop() {
  int interval;
  interval = analogRead(sensorPin);
  digitalWrite(ledPin, HIGH);
  delay(interval);
  digitalWrite(ledPin, LOW);
  delay(interval);

}
