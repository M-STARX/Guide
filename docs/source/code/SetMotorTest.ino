#include <util/atomic.h> // For the ATOMIC_BLOCK macro

// Fill in the pins for ENCA, ENCB, PWM, and DIR
// Make sure that pin ENCA is either digital pin 2 or 3
// attachInterrupt only works on digital pin 2 or 3

// EXAMPLE: #define ENCA 10
#define ENCA 2 // YELLOW
#define ENCB 3 // WHITE
#define PWM
#define DIR


volatile int posi = 0; // specify posi as volatile: https://www.arduino.cc/reference/en/language/variables/variable-scope-qualifiers/volatile/
long prevT = 0;
float eprev = 0;
float I = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ENCA,INPUT);
  pinMode(ENCB,INPUT);
  attachInterrupt(digitalPinToInterrupt(ENCA),readEncoder,RISING);

  pinMode(PWM,OUTPUT);
  Serial.println("target pos"); 
}

void loop() {
 // set target position
  int target = 1200;
  //int target = 250*sin(prevT/1e6);

  // PID constants
  float kp = 1;
  float kd = 0;
  float ki = 0;

  // time difference
  long currT = micros();
  float deltaT = ((float) (currT - prevT))/( 1.0e6 );
  prevT = currT;
  
  int pos = 0; 
  ATOMIC_BLOCK(ATOMIC_RESTORESTATE) {
    pos = posi;
  }

  ////////////////// START of TODO ////////////////////
  
  // PID (uncomment the variable lines)
  // proportional
  // int P =

  // integral
  // I = 
  
  // derivative
  // float D = 

  // control signal
  // float u = 

  ////////////////// END of TODO ////////////////////

  // motor power
  float pwr = fabs(u);
  if( pwr > 255 ){
    pwr = 255;
  }

  // motor direction
  int dir = 1;
  if(u<0){
    dir = -1;
  }

  // signal the motor
  setMotor(dir,pwr,PWM);


  // store previous error
  eprev = P;

  Serial.println(String(target) + " " + String(pos));
}

void setMotor(int dir, int pwmVal, int pwm){
  analogWrite(pwm,pwmVal);
  if(dir == 1){
    analogWrite(pwm,pwmVal);
    digitalWrite(DIR,LOW);
  }
  else if(dir == -1){
    analogWrite(pwm,pwmVal);;
    digitalWrite(DIR,HIGH);
  }
  else{
    analogWrite(pwm,pwmVal);
    digitalWrite(DIR,LOW);
  }  
}

void readEncoder(){
  int b = digitalRead(ENCB);
  if(b > 0){
    posi++;
  }
  else{
    posi--;
  }
}


///////////////////////////////////////////////////
////////////////// APPENDIX //////////////////////
/////////////////////////////////////////////////

// Read the position in an atomic block to avoid a potential
// misread if the interrupt coincides with this code running
// see: https://www.arduino.cc/reference/en/language/variables/variable-scope-qualifiers/volatile/
