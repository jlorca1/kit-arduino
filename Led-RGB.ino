int ledRojo = 2;     // Define el pin digital 2 para el LED rojo
int ledVerde = 3;    // Define el pin digital 3 para el LED verde
int ledAzul = 4;     // Define el pin digital 4 para el LED azul

void setup() {
  pinMode(ledRojo, OUTPUT);   // Configura el pin del LED rojo como salida
  pinMode(ledVerde, OUTPUT);  // Configura el pin del LED verde como salida
  pinMode(ledAzul, OUTPUT);   // Configura el pin del LED azul como salida
}

void loop() {
  digitalWrite(ledRojo, 255); // Enciende el LED rojo (valor alto)
  digitalWrite(ledVerde, 0);  // Apaga el LED verde
  digitalWrite(ledAzul, 0);   // Apaga el LED azul
  delay(1500);                // Espera 1.5 segundos

  digitalWrite(ledRojo, 0);   // Apaga el LED rojo
  digitalWrite(ledVerde, 255);// Enciende el LED verde
  digitalWrite(ledAzul, 0);   // Apaga el LED azul
  delay(1500);                // Espera 1.5 segundos

  digitalWrite(ledRojo, 0);   // Apaga el LED rojo
  digitalWrite(ledVerde, 0);  // Apaga el LED verde
  digitalWrite(ledAzul, 255); // Enciende el LED azul
  delay(1500);                // Espera 1.5 segundos

  digitalWrite(ledRojo, 255); // Enciende rojo
  digitalWrite(ledVerde, 255);// Enciende verde
  digitalWrite(ledAzul, 255); // Enciende azul → blanco
  delay(1500);                // Espera 1.5 segundos

  digitalWrite(ledRojo, 255); // Enciende rojo
  digitalWrite(ledVerde, 255);// Enciende verde
  digitalWrite(ledAzul, 0);   // Apaga azul → amarillo
  delay(1500);                // Espera 1.5 segundos

  digitalWrite(ledRojo, 255); // Enciende rojo
  digitalWrite(ledVerde, 0);  // Apaga verde
  digitalWrite(ledAzul, 255); // Enciende azul → magenta
  delay(1500);                // Espera 1.5 segundos

  digitalWrite(ledRojo, 0);   // Apaga rojo
  digitalWrite(ledVerde, 255);// Enciende verde
  digitalWrite(ledAzul, 255); // Enciende azul → cian
  delay(1500);                // Espera 1.5 segundos

  //vuelve al inicio del loop
}
