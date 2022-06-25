int vibrador = 13;
int pino_analogico = A5
int valor_A = 0;
int valor_D = 0;
void setup() {
  Serial.begin(9600);
  pinMode(pino_analogico, INPUT);
  pinMode(vibrador, OUTPUT);
}

void loop() {
  valor_A = analogRead(pino_analogico);
  if (valor_A > 220)
    tone(vibrador, 800, 2000);
}
