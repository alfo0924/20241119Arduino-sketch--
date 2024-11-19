void setup() {
  pinMode(14, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // Twinkle Twinkle Little Star
  // First line: CC GG AA G
  tone(14, 523, 500);  // C
  delay(550);
  tone(14, 523, 500);  // C
  delay(550);
  tone(14, 784, 500);  // G
  delay(550);
  tone(14, 784, 500);  // G 
  delay(550);
  tone(14, 880, 500);  // A
  delay(550);
  tone(14, 880, 500);  // A
  delay(550);
  tone(14, 784, 750);  // G
  delay(800);

  // Second line: FF EE DD C
  tone(14, 698, 500);  // F
  delay(550);
  tone(14, 698, 500);  // F
  delay(550);
  tone(14, 659, 500);  // E
  delay(550);
  tone(14, 659, 500);  // E
  delay(550);
  tone(14, 587, 500);  // D
  delay(550);
  tone(14, 587, 500);  // D
  delay(550);
  tone(14, 523, 750);  // C
  delay(800);

  // Third line: GG FF EE D
  tone(14, 784, 500);  // G
  delay(550);
  tone(14, 784, 500);  // G
  delay(550);
  tone(14, 698, 500);  // F
  delay(550);
  tone(14, 698, 500);  // F
  delay(550);
  tone(14, 659, 500);  // E
  delay(550);
  tone(14, 659, 500);  // E
  delay(550);
  tone(14, 587, 750);  // D
  delay(800);

  // Fourth line: GG FF EE D
  tone(14, 784, 500);  // G
  delay(550);
  tone(14, 784, 500);  // G
  delay(550);
  tone(14, 698, 500);  // F
  delay(550);
  tone(14, 698, 500);  // F
  delay(550);
  tone(14, 659, 500);  // E
  delay(550);
  tone(14, 659, 500);  // E
  delay(550);
  tone(14, 587, 750);  // D
  delay(800);

  delay(1000);  // Pause before repeating
}
