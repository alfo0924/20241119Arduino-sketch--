void setup() {
  // put your setup code here, to run once:

  pinMode(14,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
tone(14, 1000,80);
delay(1000);
}
