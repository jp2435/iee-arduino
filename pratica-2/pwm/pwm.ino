/*
 * Exercicio 2
 * PWM
 * analogRead(0-255);
 * Se for 25% Duty Cycle - analogWrite(64) - Vai estar 25% ligado, 75% desligado
 * Se for 50% Duty Cycle - analogWrite(127) Vai estar 50% ligado, 50% desligado
 * Se for 75% Duty Cycle - analogWrite(191) - Vai estar 75% ligado, 25% desligado
 * Se for 100% Duty Cycle - analogWrite(255) - Vai estar 100% ligado, 0% desligado
*/

const int por = 6; // PWM

void setup(){
  pinMode(por,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  /*
  Serial.println("Subindo");
  for(int pwm=5;pwm<=255;pwm+=25){
    analogWrite(por, pwm);
    Serial.println(pwm);
    delay(1*1000);
  }
  Serial.println("Descendo");
  for(int pwm=255;pwm>=0;pwm-=25){
    analogWrite(por,pwm);
    Serial.println(pwm);
    delay(1*1000);
    if(pwm==5){
      pwm = 25;
    }
  }
  */
  Serial.println("----Subindo----");
  int pwm=0;
  while(pwm<=255){
    analogWrite(por,pwm);
    Serial.println(pwm);
    delay(1*1000);

    pwm = (pwm==0)? 5: pwm+25;
  }
  Serial.println("---Descendo---");
  pwm-=25;
  while(pwm>=0){
    analogWrite(por,pwm);
    Serial.println(pwm);
    delay(1*1000);
    
    pwm = (pwm==5) ? 0: pwm-25;
    
  }
}