#include <Servo.h>//CANON
Servo servo1;
Servo servo2;
int x_key = A5;//SERVO

int x_SERVO;//

int servo1_pin = 5;
int servo2_pin = 3;

int val = 0;
int val1 = 0;
const int SW_pin = 7; // digital pin connected to switch output
int num;

void setup ( ) {
  Serial.begin (9600) ;
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);

  servo1.attach (servo1_pin ) ;
  servo2.attach (servo2_pin ) ;
  servo1.write (val);
  servo2.write (val1);
  pinMode (x_key, INPUT) ;
  servo1.write(val);
  servo2.write(90);

}

void loop ( )
{
  x_SERVO = analogRead (x_key) ;
  //Serial.println(x_pos_1);
  //Serial.println(y_pos_1);
  Serial.print(x_SERVO + String("  "));
  Serial.print(val + String("  "));
  Serial.print("Switch:  ");
  Serial.println(digitalRead(SW_pin));
  

  //SERVO FOR GOALIE

  if (x_SERVO > 700)
  {

    while(val<=180)
    {x_SERVO = analogRead (x_key) ;
    if(x_SERVO<=700)
    {
      break;
    }
    val = val + 1;
    delay(15);

    servo1.write(val);
    delay(15);
    Serial.println(val);

    Serial.println("right");
    Serial.println(String("X SERVO: ")+x_SERVO);

    // waits for the servo to get there
    //    servo1.write(val);                  // sets the servo position
    //    delay(15);                           // waits for the servo to get there
    }

  }

  if (x_SERVO <= 400)
  {

    while(val>=0)
    {x_SERVO = analogRead (x_key) ;
      if(x_SERVO>400)
      {
        break;
      }
    val = val - 1;
    delay(15);
    servo1.write(val);
    Serial.println(val);
    delay(15);
    Serial.println("left");
    Serial.println(String("X SERVO: ")+x_SERVO);
    //      servo1.write(val);                  // sets the servo position
    //      delay(15);                           // waits for the servo to get there */
    }
    
  }

  if (digitalRead(SW_pin) == 0)
  {
    Serial.println("CANON SHOOT move");
    delay(15);
    num = random(180);
    servo2.write(num);
    delay(15);
    Serial.println("csnon shoot");

    delay(15);

  }


}
