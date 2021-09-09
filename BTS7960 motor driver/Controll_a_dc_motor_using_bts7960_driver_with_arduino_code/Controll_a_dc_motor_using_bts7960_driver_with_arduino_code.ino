// Control dc motor using bts7960 driver

#define rpwm 9               // define the R_PWM pin
#define lpwm 10               // define the L_PWM pin
int delayTime = 1000;            // set the time delay as variable to easily change

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(rpwm, OUTPUT);
  pinMode(lpwm, OUTPUT);

}

void loop() {
  leftDir();
  delay(delayTime);
  stopM();
  delay(500);
//  rightDir();
//  delay(delayTime);
//  stopM();
//  delay(200);

          

;

  // printing Serial monitor 
   int right = digitalRead(rpwm);
   int left = digitalRead(lpwm);
  Serial.print(right);
  Serial.print(" ");
  Serial.println(left);
  
}
// Left Direction function
void leftDir(){
  
  digitalWrite(rpwm,HIGH);
  digitalWrite(lpwm, LOW);
//  delay(delayTime);
  }

// Right Direction
void rightDir(){
  digitalWrite(rpwm, LOW);
  digitalWrite(lpwm,HIGH);
//  delay(delayTime);
  }

void stopM(){
  digitalWrite(rpwm, LOW);
  digitalWrite(lpwm,LOW);
//  delay(delayTime);
  }
