int brillo = 0;

int pinPot = 34;
int pinLed = 2;

const int frecuencia = 1000;
const int resolucion = 10;

void setup() {
  Serial.begin(9600);

  // Configuramos el PWM del LED
  ledcAttach(pinLed, frecuencia, resolucion);

  delay(1000);
}

void loop() {
  // Leemos el potenciómetro
  brillo = analogRead(pinPot);

  Serial.println(brillo);

  // Convertimos la lectura de 0-4095 a 0-1023
  brillo = map(brillo, 0, 4095, 0, 1023);

  Serial.println(brillo);

  // Aplicamos el brillo al LED
  ledcWrite(pinLed, brillo);

  delay(100);
}