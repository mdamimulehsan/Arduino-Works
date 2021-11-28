byte x,y,z;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  pinMode(11, INPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  x = digitalRead(13);
  y = digitalRead(12);
  y = digitalRead(11);
  
  digitalWrite(10, x^y^z);
  digitalWrite(9, (x&y) | (y&z) | (x&z));
}
