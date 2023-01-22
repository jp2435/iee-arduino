#define ledG 2
#define ledY 3
#define ledR 4


void setup() {
  pinMode(ledG,OUTPUT);
  pinMode(ledY,OUTPUT);
  pinMode(ledR,OUTPUT);
  Serial.begin(9600);

  digitalWrite(ledG,0);
  digitalWrite(ledY,0);
  digitalWrite(ledR,0);

}

void loop() {
  digitalWrite(ledG,1);
  Serial.println("Semaforo: Verde");
  delay(5*1000);


  digitalWrite(ledG,0);
  digitalWrite(ledY,1);
  Serial.println("Semaforo: Amarelo");
  delay(1.5* 1000);

  digitalWrite(ledY,0);
  digitalWrite(ledR,1);
  Serial.println("Semaforo: Vermelho");
  delay(10*1000);
  digitalWrite(ledR,0);
  }
