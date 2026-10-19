
int brillo = 0;
const int pinLed = 2;

// Características del PWM
const int frecuencia = 5000;
const int resolucion = 8;

void setup() {
  // Configurar el PWM en el GPIO 2
  ledcAttach(pinLed, frecuencia, resolucion);
}

void loop() {
  // Aumentar el brillo
  for (brillo = 0; brillo <= 255; brillo++) {
    ledcWrite(pinLed, brillo);
    delay(15);
  }

  // Disminuir el brillo
  for (brillo = 255; brillo >= 0; brillo--) {
    ledcWrite(pinLed, brillo);
    delay(15);
  }
}
