// Control dc motor using bts7960 driver

#define rpwm 10               // define the R_PWM pin
#define lpwm 11               // define the L_PWM pin
int delayTime = 5;            // set the time delay as variable to easily change

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(rpwm, OUTPUT);
  pinMode(lpwm, OUTPUT);

}

void loop() {
  
  digitalWrite(rpwm, HIGH);
  digitalWrite(lpwm,LOW);
  delay(delayTime);          

  digitalWrite(rpwm,LOW);
  digitalWrite(lpwm, HIGH);
  delay(delayTime);

  
   int right = digitalRead(rpwm);
   int left = digitalRead(lpwm);
  Serial.print(right);
  Serial.print(" ");
  Serial.println(left);
  
}
