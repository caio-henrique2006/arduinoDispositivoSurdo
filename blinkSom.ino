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

  if(valorAnalog >= 60){
    tempoAtual= millis();
    tempoDelay= tempoAtual + 1000;
  }
  
  tempoAtual=millis();
  if(tempoAtual < tempoDelay){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
}
 
