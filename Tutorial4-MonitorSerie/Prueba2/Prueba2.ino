/*
 * 
 * http://www.manusoft.es
 * TUTORIALES Y SOLUCIONES INFORMÁTICAS
 * 
 * Iniciación a Arduino [4/9]: Monitor Serie.
 * 
 */

int x = 0; /* Variable definida */
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); /* Este comando abre el puerto serie y fija la velocidad en baudios para la transmisión de datos en serie. */
}

void loop() {
  // put your main code here, to run repeatedly:
  x = x + 1; /* Incrementamos en 1 el valor de x. */
  Serial.println(x); /* Este comando muestra en la consola el texto "Hello world." */
}
