byte a, b;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  a = digitalRead(13);
  b = digitalRead(12);
  
  digitalWrite(11, a^b);
  digitalWrite(10, (!a)&b);
}
