int buzzer = 3; // Digital Pin 3

// Notes in hertz
int melody[] = {
  659, 494, 523, 587, 523, 494, 440, 440, 523, 659, 587, 523, 494, 523, 587, 659,
  523, 440, 440, 0,
  587, 698, 880, 784, 698, 659, 523, 659, 587, 523,
  494, 494, 523, 587, 659, 523, 440, 440
};

// 3 for dotted quarters, 4 for quarters, 8 for eights
int durations[] = {
  4, 8, 8, 4, 8, 8, 4, 8, 8, 4, 8, 8, 3, 8, 4, 4,
  4, 4, 4, 4, // 0 freq with 4 duration acts as a rest
  3, 8, 4, 8, 8, 3, 8, 4, 8, 8,
  4, 8, 8, 4, 4, 4, 4, 4
};

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  int totalNotes = sizeof(melody) / sizeof(int);

  for (int thisNote = 0; thisNote < totalNotes; thisNote++) {

    int noteDuration = 1000 / durations[thisNote];
    
    // Only play tone if frequency is > 0 (allows for rests)
    if (melody[thisNote] > 0) {
      tone(buzzer, melody[thisNote], noteDuration);
    }
    
    // 1.10 for a snappy, 8-bit feel
    int pauseBetweenNotes = noteDuration * 1.10;
    delay(pauseBetweenNotes);
    
    noTone(buzzer);
  }
  
  delay(2000);
}