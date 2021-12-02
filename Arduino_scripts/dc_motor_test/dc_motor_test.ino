#define EN_L 9
#define IN1_L 10
#define IN2_L 11

#define EN_R 6
#define IN1_R 12
#define IN2_R 13

#define delaytime 30

void setup() {
  Serial.begin(9600);
  Motors_init();
  
//  analogWrite(EN_L, 120);
//
//  digitalWrite(IN1_L, HIGH);
//
//  digitalWrite(IN2_L, LOW);
//
//  analogWrite(EN_R, 120);
//
//  digitalWrite(IN1_R, HIGH);
//
//  digitalWrite(IN2_R, LOW);
}

void loop() {
  //ramp up
  uint8_t i = 0;
  for(i = 0; i < 120; i++){
    analogWrite(EN_L, i);
    digitalWrite(IN1_L, HIGH);
    digitalWrite(IN2_L, LOW);
    Serial.println(i);
    delay(delaytime);
  }

  delay(2000);
  //ramp down
  for(i; i > 0; i--){
    analogWrite(EN_L, i);
    digitalWrite(IN1_L, HIGH);
    digitalWrite(IN2_L, LOW);
    Serial.println(i);
    delay(delaytime);
  }

  delay(1000);
}


void Motors_init() {

  pinMode(EN_L, OUTPUT);

  pinMode(EN_R, OUTPUT);

  pinMode(IN1_L, OUTPUT);

  pinMode(IN2_L, OUTPUT);

  pinMode(IN1_R, OUTPUT);

  pinMode(IN2_R, OUTPUT);

  digitalWrite(EN_L, LOW);

  digitalWrite(EN_R, LOW);

  digitalWrite(IN1_L, LOW);

  digitalWrite(IN2_L, LOW);

  digitalWrite(IN1_R, LOW);

  digitalWrite(IN2_R, LOW);

}