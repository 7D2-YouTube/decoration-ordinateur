#include <Servo.h>

#define green 5
#define red 6
#define pin 4
#define pon 3

Servo myservo;

int deg = 0;

long g;
long r;

void setup() {
  Serial.begin(9600);
  
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(pin, OUTPUT);
  pinMode(pon, OUTPUT);
  
  myservo.attach(9);
  myservo.write(deg);

}

void loop() {
  for(deg = 0; deg <= 45; deg ++)
  {
    g = random(0, 25);
    r = random(200, 255);
    analogWrite(green, g);
    analogWrite(red, r);
    
    myservo.write(deg);
    delay(50);

  }

  digitalWrite(pin, LOW);
  digitalWrite(pon, HIGH);

  for(deg = 45; deg <= 90; deg ++)
  {
    g = random(0, 25);
    r = random(200, 255);
    analogWrite(green, g);
    analogWrite(red, r);
    
    myservo.write(deg);
    delay(50);

  }

  digitalWrite(pin, HIGH);
  digitalWrite(pon, LOW);

  for(deg = 90; deg >= 45; deg --)
  {
    g = random(0, 25);
    r = random(200, 255);
    analogWrite(green, g);
    analogWrite(red, r);
    
    myservo.write(deg);
    delay(50);

  }

  digitalWrite(pin, LOW);
  digitalWrite(pon, HIGH);

  for(deg = 45; deg >= 0; deg --)
  {
    g = random(0, 25);
    r = random(200, 255);
    analogWrite(green, g);
    analogWrite(red, r);
    
    myservo.write(deg);
    delay(50);

  }

  digitalWrite(pin, HIGH);
  digitalWrite(pon, LOW);

}
