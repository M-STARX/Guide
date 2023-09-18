// Fill in the pins for both ENCA and ENCB
// Make sure that pin ENCA is either digital pin 2 or 3
// attachInterrupt only works on digital pin 2 or 3

// EXAMPLE: #define ENCA 10
#define ENCA 2
#define ENCB 3

int posi = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ENCA,INPUT);
  pinMode(ENCB,INPUT);
  
  // attachInterrupt use different resources to constantly check for a RISING (low to high)
  attachInterrupt(digitalPinToInterrupt(ENCA),readEncoder,RISING);
}

void loop() {
  Serial.println(posi);
}

// This function is called every time that attachInterrruptI sees a RISING signal
void readEncoder(){
  int b = digitalRead(ENCB);
  if(b > 0){
    posi++;
  }
  else{
    posi--;
  }
}
