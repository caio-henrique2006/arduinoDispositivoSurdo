int led = 12;
int micAnalog = A5;
int valorAnalog = 0;
unsigned long tempoDelay = 0;
unsigned long tempoAtual = 0;

void setup() {
  Serial.begin(9600);
  pinMode(micAnalog, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  valorAnalog = analogRead(micAnalog);
  Serial.println(valorAnalog);
  if(valorAnalog >= 340 or valorAnalog <= 310){
    tempoAtual= millis();
    tempoDelay= tempoAtual + 1000;
  }
  
  tempoAtual=millis();
  if(tempoAtual < tempoDelay){
    tone(led, valorAnalog);
  }else{
    noTone(led);
  }

}
 