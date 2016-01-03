/* UFO.ino  (c) 02/01/2016  D.J.Whale */

#define A 0
#define B 1
#define GUARD_MS 10

void setup() 
{                
  pinMode(A, OUTPUT);
  digitalWrite(A, LOW);
  pinMode(B, OUTPUT);
  digitalWrite(B, LOW);
}

void A_LIT()
{
  // group A of LEDs ON
  digitalWrite(B, LOW); 
  digitalWrite(A, HIGH);
}

void B_LIT()
{
  // group B of LEDs ON
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
}

void DARK()
{
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
}

void flashms(int speedms) 
{
  A_LIT();
  delay(speedms);
  B_LIT();
  delay(speedms);
}

void flying()
{
  for (int i=0; i<30; i++) // 10=2 seconds, 30=6 seconds
  {
    flashms(100);
  }
}

void landing()
{
  int speedms = 100;
  for (int i=0; i<10; i++)
  {
    A_LIT();
    speedms += 50;
    delay(speedms);
    
    B_LIT();
    speedms += 50;
    delay(speedms);
  }
}

void landed()
{
  for (int i=0; i<500; i++) // 100 per second, so 5 seconds
  {
    A_LIT();
    delay(10);
    B_LIT();
    delay(10);
  }
}

void takingoff()
{
  int speedms = 1000;
  for (int i=0; i<9; i++)
  {
    A_LIT();
    speedms -= 50;
    delay(speedms);
    
    B_LIT();
    speedms -= 50;
    delay(speedms);
  }
}

void loop()
{
  flying();
  landing();
  landed();
  takingoff();
}


