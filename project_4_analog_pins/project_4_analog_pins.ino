int RED_PIN = 3;

void setup() {
  pinMode(RED_PIN, OUTPUT);
}

void loop() {
  analogWrite(RED_PIN, 64); // Dim to 1/4 brightness
  delay(1000);
  analogWrite(RED_PIN, 255); // Brighten to full
  delay(1000);
}
