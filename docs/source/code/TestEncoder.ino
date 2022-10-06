// Fill in the pins for both ENCA and ENCB

// EXAMPLE: #define ENCA 10
#define ENCA
#define ENCB

// Everything inside of setup() will only execute once
void setup() {
  Serial.begin(9600);
  pinMode(ENCA,INPUT);
  pinMode(ENCB,INPUT);
}

// Everything inside of loop() will continuously execute
void loop() {
  int a = digitalRead(ENCA);
  int b = digitalRead(ENCB);

  // This prints values to the serial monitor
  Serial.println(String(a*5) + " " + String(b*5));
}
