int readPin = A5; // A for analog pin

void setup() {
  pinMode(readPin, INPUT);
  Serial.begin(9600); // Speed at which data is transmitted
}

void loop() {
  Serial.println(analogRead(readPin));
  delay(1000);
}