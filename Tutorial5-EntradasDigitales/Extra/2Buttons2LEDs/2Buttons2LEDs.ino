/*
 * 
 * https://www.manusoft.es
 * TUTORIALES Y SOLUCIONES INFORMÁTICAS
 * 
 * Iniciación a Arduino [5/9]: Salidas Digitales - Botones.
 * 
 */

const int redButton   = 8;  // the number of the redLED pushbutton pin
const int blueButton  = 2;  // the number of the blueLED pushbutton pin
const int redLED      = 7;  // the number of the redLED pin
const int blueLED     = 4;  // the number of the blueLED pin

int redButtonState    = 0;  // variable for reading the redLED pushbutton status
int blueButtonState   = 0;  // variable for reading the blueLED pushbutton status

void setup() {
  pinMode(redButton, INPUT);  // initialize the redLED pushbutton pin as a input
  pinMode(blueButton, INPUT); // initialize the blueLED pushbutton pin as a input
  pinMode(redLED, OUTPUT);    // initialize the redLED pin as a output
  pinMode(blueLED, OUTPUT);   // initialize the blueLED pin as a output
}

void loop() {
  redButtonState = digitalRead(redButton);    // read the state of the redLED pushbutton value
  blueButtonState = digitalRead(blueButton);  // read the state of the blueLED pushbutton value

  // check if the redLED pushbutton is pressed. If it is, the redButtonState is HIGH
  if (redButtonState == LOW) {
     // turn redLED on
    digitalWrite(redLED, HIGH);
  } else {
    // turn redLED off
    digitalWrite(redLED, LOW);
  }

  // check if the blueLED pushbutton is pressed. If it is, the blueButtonState is HIGH
  if (blueButtonState == LOW) {
    // turn blueLED on
    digitalWrite(blueLED, HIGH);
  } else {
    // turn blueLED off
    digitalWrite(blueLED, LOW);
  }

  
}
