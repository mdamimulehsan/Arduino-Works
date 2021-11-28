byte a, b, c;
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
  a = digitalRead(13);
  b = digitalRead(12);
  c = digitalRead(11);
  
  digitalWrite(10, a^b^c);
  digitalWrite(9, (b&c) | ((!a)&c) | ((!a)&b));
}
