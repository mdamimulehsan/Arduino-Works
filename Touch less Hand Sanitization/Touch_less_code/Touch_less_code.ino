 
#include <Servo.h>
#include <LiquidCrystal.h>  

const int trigPin = 13; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 12; // Echo Pin of Ultrasonic Sensor

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);   //LCD :  (rs, enable, d4, d5, d6, d7)
Servo Myservo;


void setup() 
{
 lcd.begin(16,2); 
Serial.begin(9600); // Starting Serial Terminal

Myservo.attach(10);  // Signal Pin of Servo 

lcd.setCursor(0,0);
lcd.print("Touch-Less");

lcd.setCursor(0,1);
lcd.print("Hand sanitizer");


                                       
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.print("  Distance    ");



Serial.print("  Measurement  ");
delay(500);
delay(500);
Serial.print("Made By :");

Serial.print(" Mehrab Nabi Alamin");
delay(1000);

}

void loop()
{
  long duration, cm;
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  cm = microsecondsToCentimeters(duration);
  

Serial.print("Distance:");
  Serial.print(cm);
  Serial.print("cm");
  delay(100);
  
    if(cm >= 30){
Myservo.write(0);
}
else {
Myservo.write(90);


}

  Serial.println();
delay(100);

}


long microsecondsToCentimeters(long microseconds)
{
   return microseconds / 29 / 2;
}
