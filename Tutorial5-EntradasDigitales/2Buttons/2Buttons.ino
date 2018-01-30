/*
 * 
 * https://www.manusoft.es
 * TUTORIALES Y SOLUCIONES INFORMÁTICAS
 * 
 * Iniciación a Arduino [5/9]: Salidas Digitales - Botones.
 * 
 */

// constants won't change. They're used here to set pin numbers:
const int buttonAPin = 2;     // the number of the pushbutton A pin
const int buttonBPin = 4;     // the number of the pushbutton B pin
const int ledPin =  8;      // the number of the LED pin

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton A pin as an input:
  pinMode(buttonAPin, INPUT);
  // initialize the pushbutton B pin as an input:
  pinMode(buttonBPin, INPUT);
}

void loop() {
  // check if the pushAbutton is pressed.
  // if it is, the LED is HIGH:
  if (digitalRead(buttonAPin) == LOW) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  }
  // check if the pushBbutton is pressed.
  // if it is, the LED is LOW:
  if (digitalRead(buttonBPin) == LOW) {
    digitalWrite(ledPin, LOW);
  }
}
