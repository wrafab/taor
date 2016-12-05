int sensePin = 2;
int ledPin = 9;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(sensePin)/4;
  analogWrite(ledPin, value);
  Serial.println(value);
}
