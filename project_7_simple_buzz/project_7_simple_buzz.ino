int passiveBuzz = 3;

void setup() {
  pinMode(passiveBuzz, OUTPUT);
}

void loop() {
  analogWrite(passiveBuzz, 250);
}
