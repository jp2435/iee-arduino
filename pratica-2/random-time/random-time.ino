/*
 * 1º exercicio
*/

const int led = 6; // PWM

void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  digitalWrite(LED_BUILTIN, 1); delay(1* 1000);
  digitalWrite(LED_BUILTIN, 0);
}
void loop(){
  int time = random(1);
  Serial.println(time);
  digitalWrite(led,1);
  delay(time * 1000);
  digitalWrite(led,0);
  delay(0.5 * 1000);
}

int random(int i){
  int res = rand() % 3 + 1;
  return res;
}