//Automatic Crossing Gate By RABKA (First Project)

#include <Servo.h>

Servo servo;

int ir = A1;
int ledM = 2;
int ledH = 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo.attach(A0);
  pinMode(ir, INPUT);
  pinMode(ledM, OUTPUT);
  pinMode(ledH, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (analogRead(ir) <= 40) {
    servo.write(0);
    digitalWrite(ledM, HIGH);
    digitalWrite(ledH, LOW);
    delay(15000);
  } else {
    servo.write(90);
    digitalWrite(ledM, LOW);
    digitalWrite(ledH, HIGH);
  }
  Serial.println(analogRead(ir));
}
