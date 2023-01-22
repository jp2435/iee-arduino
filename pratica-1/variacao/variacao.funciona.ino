#define ledG 2
#define ledY 3
#define ledR 4
const int por = 0;
float tempoAdicional=0;
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
  tempoAdicional = (float) (valor*10);
  tempoAdicional = (float) tempoAdicional/1023;
  tempoAdicional = (float) tempoAdicional*500;
  //Serial.println('------');
  //Serial.println((float) (valor/1023));
  //Serial.println(valor);
  //Serial.println(tempoAdicional);
  Serial.print("Tempo adicional de ");
  Serial.println((float)tempoAdicional/1000);
  //Serial.println(analogRead(por));
  delay(3*1000);

  digitalWrite(ledG,1);
  Serial.println("Semaforo: Verde");
  delay((5*1000) + tempoAdicional);


  digitalWrite(ledG,0);
  digitalWrite(ledY,1);
  Serial.println("Semaforo: Amarelo");
  delay((1.5* 1000) + tempoAdicional);

  digitalWrite(ledY,0);
  digitalWrite(ledR,1);
  Serial.println("Semaforo: Vermelho");
  delay((10*1000) + tempoAdicional);
  digitalWrite(ledR,0);


}
