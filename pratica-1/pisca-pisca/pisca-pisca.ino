#define led 13


void setup() {
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
}

void loop() {
  digitalWrite(led,HIGH);
  delay(1*1000);
  digitalWrite(led,LOW);
  delay(1* 1000);
}
