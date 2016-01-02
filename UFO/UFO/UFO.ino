#define A 0
#define B 1
#define SPEED_MS 100
#define GUARD_MS 10

void setup() {                
  pinMode(A, OUTPUT);
  digitalWrite(A, LOW);
  pinMode(B, OUTPUT);
  digitalWrite(B, LOW);
}

void loop() {
  // group A of LEDs ON
  digitalWrite(A, HIGH); // B low
  delay(SPEED_MS);
  digitalWrite(A, LOW); // B low
  delay(GUARD_MS);
  
  // group B of LEDs ON
  digitalWrite(B, HIGH); // A low
  delay(SPEED_MS);
  digitalWrite(B, LOW); // A low
  delay(GUARD_MS);
}
