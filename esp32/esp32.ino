#define BAUD 19200
String command = "";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(BAUD);
  delay(500);
  // setup motor drivers
  // calibrate filter motor to the init position
  Serial.println("Serial is ready");
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
  {
    command = Serial.readString();
    command.trim();

    if (command == "1")
      digitalWrite(2, HIGH);
   else if (command == "2")
      digitalWrite(2, LOW);
  }
  command = "";
  delay(100);
}
