void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT); // Use pin 7 as an output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7, HIGH); // HIGH means 5v or on
  delay(1000);
  digitalWrite(7, LOW); // LOW means 0v or off
  delay(1000);
}
