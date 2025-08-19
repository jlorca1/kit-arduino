#include <Servo.h>           // Incluye la biblioteca Servo para controlar motores servo

Servo servo;                 // Crea un objeto 'servo' para manejar el motor

void setup() {
  servo.attach(2);          // Conecta el servo al pin digital 2 del Arduino
}

void loop() {
  int val = analogRead(0);  // Lee el valor analógico del pin A0 (por ejemplo, de un potenciómetro)
  
  val = map(val, 0, 1023, 0, 180); // Convierte el valor leído (0–1023) a un ángulo entre 0 y 180 grados
  
  servo.write(val);         // Mueve el servo al ángulo calculado
  
  delay(15);                // Espera 15 milisegundos para que el servo tenga tiempo de moverse
}
