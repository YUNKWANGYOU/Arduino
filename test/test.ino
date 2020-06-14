void setup() {
  // put your setup code here, to run once:
  pinModel(LED_BUILTIN , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BULTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BULTIN, LOW);
  delay(1000);
}
