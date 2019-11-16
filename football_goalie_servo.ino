#include <Servo.h>
Servo servo1;//SERVO FOR GOALIE

int x_key = A5;//SERVO


int x_SERVO;//



int servo1_pin = 3;




int val = 90;
int val1 = 90;



void setup ( ) {
  
 
  servo1.attach (servo1_pin ) ;
  
 
 
  pinMode (x_key, INPUT) ;
  Serial.begin (9600) ;
  
  
}

void loop ( )
{
  x_SERVO = analogRead (x_key) ;
  

  //Serial.println(x_pos_1);
  //Serial.println(y_pos_1);
  Serial.println(x_SERVO + String("  "));
  
   
  
  Serial.print(val + String("  "));
 
  val = 90;
  servo1.write(val);
  
  //SERVO FOR GOALIE



  if (x_SERVO > 700)
  {

    delay(15);
    servo1.write(100);
    delay(15);                           // waits for the servo to get there
//    servo1.write(val);                  // sets the servo position
//    delay(15);                           // waits for the servo to get there


  }

  if (x_SERVO <= 400)
  {
    
      delay(15);
      servo1.write(80);
      delay(15);
//      servo1.write(val);                  // sets the servo position
//      delay(15);                           // waits for the servo to get there */
      ;
    
  }

 
}
// foom0009@e.ntu.edu.sg
