int A5_PIN = A5;
float calcVal;

void setup() {
  pinMode(A5_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  calcVal = (5.0 / 1023) * (analogRead(A5_PIN));
  Serial.println(calcVal);
  delay(500);
}
