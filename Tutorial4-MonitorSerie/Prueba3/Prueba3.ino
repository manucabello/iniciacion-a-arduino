/*
 * 
 * http://www.manusoft.es
 * TUTORIALES Y SOLUCIONES INFORMÁTICAS
 * 
 * Iniciación a Arduino [4/9]: Monitor Serie.
 * 
 */

void setup() {
  pinMode(13, OUTPUT); /* Configuramos el pin 13 como pin de salida */
  Serial.begin(9600); /* Este comando abre el puerto serie y fija la velocidad en baudios para la transmisión de datos en serie. */
}

void loop() {
  digitalWrite(13, HIGH); /* Encendemos el LED */
  Serial.println("On"); /* Mostramos por la consola serie "On". */
  delay(1000); /* Hacemos que la placa espere 1 seg. */
  digitalWrite(13, LOW); /* Apagamos el LED */
  Serial.println("Off"); /* Mostramos por la consola serie "Off". */
  delay(1000); /* Hacemos que la placa espere 1 seg. */
}
