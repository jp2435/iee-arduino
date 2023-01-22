#define ledG 2
#define ledY 3
#define ledR 4
const int por = A0;
unsigned long int tempoAdicional=0;
int valor;

void setup() {
  pinMode(ledG,OUTPUT);
  pinMode(ledY,OUTPUT);
  pinMode(ledR,OUTPUT);
  pinMode(por,INPUT);
  Serial.begin(9600);

  digitalWrite(ledG,0);
  digitalWrite(ledY,0);
  digitalWrite(ledR,0);

}

void loop() {
  valor=analogRead(por);
  tempoAdicional = (valor*1000);
  //Serial.println('------');
  //Serial.println((float) (valor/1023));
  Serial.println((long) valor);
  Serial.println((long) tempoAdicional);
  //Serial.println(analogRead(por));
  delay(3*1000);

}
