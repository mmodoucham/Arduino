

#include <Ultrasonic.h>
#include <Servo.h>

Servo myservo;

Ultrasonic ultrasonic(7, 5);
int distance;

int val;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
}

void loop() {

  distance = ultrasonic.read();
  val = analogRead(distance);

  if (distance < 15) {
    myservo.write(180);
    Serial.print("Distance in CM: ");
    Serial.println(distance);
    delay(1500);

  } else {
    myservo.write(0);
    Serial.print("Distance in CM: ");
    Serial.println(distance);
    delay(500);
  }

}
