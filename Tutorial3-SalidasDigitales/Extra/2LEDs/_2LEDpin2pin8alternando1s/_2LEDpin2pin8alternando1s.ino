/*
 * 
 * http://www.manusoft.es
 * TUTORIALES Y SOLUCIONES INFORMÁTICAS
 * 
 * Iniciación a Arduino [3/9]: Salidas digitales - LEDs.
 * 
 */

// Declaramos la variable ledAzul de tipo int con valor 2.
int ledAzul = 2;
// Declaramos la variable ledRojo de tipo int con valor 8.
int ledRojo = 8;

void setup() {
  // put your setup code here, to run once:
  // Definimos que el pin 2 (ledAzul) será de salida.
  pinMode(ledAzul, OUTPUT);
  // Definimos que el pin 8 (ledRojo) será de salida.
  pinMode(ledRojo, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Encendemos el led azul poniendo el valor del pin 2 en alto.
  digitalWrite(ledAzul, HIGH);
  // Apagamos el led rojo poniendo el valor del pin 8 en bajo.
  digitalWrite(ledRojo, LOW);
  // Detenemos el programa 1 segundo.
  delay(1000);
  // Apagamos el led azul poniendo el valor del pin 2 en bajo.
  digitalWrite(ledAzul, LOW);
  // Encendemos el led rojo poniendo el valor del pin 8 en alto.
  digitalWrite(ledRojo, HIGH);
  // Detenemos el programa 1 segundo.
  delay(1000);
}
