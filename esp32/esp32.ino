String command = "";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(19200);
  delay(500);
  Serial.println("Serial is ready");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available())
  {
    command = Serial.readString();
    command.trim();
    Serial.println(command);
  }
  delay(10);
}
