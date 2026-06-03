int DELAY_TIME = 3000;
int GREEN = 7;
int YELLOW = 6;
int RED = 5;

void setup() {
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop() {
  // GREEN
  digitalWrite(GREEN, HIGH); // GREEN ON
  delay(DELAY_TIME);
  digitalWrite(GREEN, LOW); // GREEN OFF

  // YELLOW
  digitalWrite(YELLOW, HIGH); // YELLOW ON
  delay(DELAY_TIME);
  digitalWrite(YELLOW, LOW); // YELLOW OFF

  // RED
  digitalWrite(RED, HIGH); // RED ON
  delay(DELAY_TIME);
  digitalWrite(RED, LOW); // RED OFF
}
