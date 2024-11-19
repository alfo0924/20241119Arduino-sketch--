
void setup() {
  pinMode(14, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  tone(14, 1568, 500);
  delay(600);
  tone(14, 1319, 500);
  delay(600);
  tone(14, 1319, 500);
  delay(600);
  tone(14, 1397, 500);
  delay(600);
  tone(14, 1175, 500);
  delay(600);
  tone(14, 1175, 500);
  delay(600);
  
  tone(14, 1047, 500);
  delay(600);
  tone(14, 1175, 500);
  delay(600);
  tone(14, 1319, 500);
  delay(600);
  tone(14, 1397, 500);
  delay(600);
  tone(14, 1568, 500);
  delay(600);
  tone(14, 1568, 500);
  delay(600);
  tone(14, 1568, 500);
  delay(600);
  
  delay(2000);
}
