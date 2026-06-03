int buzzer = 3; // Digital Pin 3

// The "Playlist" (Frequencies in Hz)
int melody[] = {
  330, 330, 349, 392, 392, 349, 330, 294, 262, 262, 294, 330, 330, 294, 294,
  330, 330, 349, 392, 392, 349, 330, 294, 262, 262, 294, 330, 294, 262, 262
};

// The "Rhythm" (Note Durations: 4 = quarter note, 8 = eighth note, etc.)
int durations[] = {
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 8, 2,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 8, 2
};

void setup() {
  // No setup needed for tone() but pin output is good practice
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // Iterate over the notes of the array:
  for (int thisNote = 0; thisNote < 30; thisNote++) {

    // Calculate the duration of the note in milliseconds
    // (1000ms / 4 = 250ms for a quarter note)
    int noteDuration = 1000 / durations[thisNote];
    
    tone(buzzer, melody[thisNote], noteDuration);

    // To distinguish the notes, set a minimum time between them.
    // The note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    
    // Stop the tone playing before the next loop
    noTone(buzzer);
  }
  
  delay(2000); // Wait 2 seconds before playing the song again
}