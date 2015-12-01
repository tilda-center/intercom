int sensorPin = A0;
int intercomPin = 13;
int sensorValue = 1023;

void setup() {
  pinMode(intercomPin, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin);

  // if someone is ringing, voltage drops to 0.1V
  if (sensorValue < 500) {
    delay(10000);
    digitalWrite(intercomPin, HIGH);
    delay(1000);
  }

  digitalWrite(intercomPin, LOW);
}
