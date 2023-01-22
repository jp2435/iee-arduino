/*
 * Exercicio nª 3
*/

const int led = 6;
int incomingByte=0;

int random(int i){
  int res= rand()%3;
  return res;
}


void BLedCres(){
  int pwm=0;
  while(pwm<=255){
    analogWrite(led,pwm);
    Serial.println(pwm);
    delay(1*1000);

    pwm = (pwm==0)? 5: pwm+25;
  }

}
void BLedDCres(){
  int pwm = 255;
  while(pwm>=0){
    analogWrite(led,pwm);
    Serial.println(pwm);
    delay(1*1000);
    
    pwm = (pwm==5) ? 0: pwm-25;
    
  }
}
void BlinkLed(){
  for(int i =0;i<5;i++){
    digitalWrite(led,1);
    delay(0.5*1000);
    digitalWrite(led,0);
    delay(0.5*1000);
  }
}

void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  //int opcao = random(1);
  
  if(Serial.available()>0){
    incomingByte = Serial.read();
    /*
     * 0 = 48
     * 1 = 49
     * 2 = 50
    */
    Serial.println(incomingByte);
    switch(incomingByte){
    //case 0:
    case 48:
      BLedCres();
      break;
    //case 1:
    case 49:
      BLedDCres();
      break;
    //case 2:
    case 50:
      BlinkLed();
      break;
    default:
      Serial.println("Opcao errada");
  }

  }
  //int opcao = 2;
  //Serial.print("Opção escolhida:"); Serial.println(opcao);
  /*
  if(opcao==0){
    BLedCres();
  }else if(opcao==1){
    BLedDCres();
  }else{
    BlinkLed();
  }
  */
  

}

/**
 * @param i Verificação
 * @return res Variação de [0,2]
 * 0 - Opção de variar a intensidade do LED de modo crescente
 * 1 - Opção de variar a intensidade do LED de mode decrescente
 * 2 - Opção de acender e apagar o LED 5 vezes seguidas
*/

