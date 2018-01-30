/*
 * 
 * http://www.manusoft.es
 * TUTORIALES Y SOLUCIONES INFORMÁTICAS
 * 
 * Iniciación a Arduino [4/9]: Monitor Serie.
 * 
 */

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); /* Este comando abre el puerto serie y fija la velocidad en baudios para la transmisión de datos en serie. */
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello world."); /* Este comando muestra en la consola el texto "Hello world." */
}
