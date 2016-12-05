/*
 * Force Sensitive Resistor Test Code
 *
 * The intensity of the LED will vary with the amount of pressure on the sensor
 */

int sensePin = 2;    // the pin the FSR is attached to
int ledPin = 9;      // the pin the LED is attached to (use one capable of PWM)
int speakerPin = 10;

int length = 15; // the number of notes
char notes[] = "ccggaagffeeddc "; // a space represents a rest
int beats[] = { 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 4 };
int tempo = 300;

void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }
}

void playNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };
  
  // play the tone corresponding to the note name
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  // declare the ledPin as an OUTPUT
  pinMode(speakerPin, OUTPUT);
}

void loop() {
  int value = analogRead(sensePin); //the voltage on the pin divded by 4 (to scale from 10 bits (0-1024) to 8 (0-255)
  if (value > 10){
    analogWrite(ledPin,0);
    playNote(notes[2], 2);
    
  } //sets the LEDs intensity proportional to the pressure on the sensor
  else{
    analogWrite(ledPin, 255);
  }
  Serial.println(value/4);              //print the value to the debug window
}
