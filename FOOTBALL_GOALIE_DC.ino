int x_key_1 = A5;//DC


int x_DC;


int Bin2 = 3; // assigns pin 3 to variable pwm (motor pin)
int Bin1 = 2;
int space;   // declares variable space
int mark = 200;  // declares variable mark




void setup ( ) {
  Serial.begin (9600) ;

  
  pinMode (x_key_1, INPUT) ;
  pinMode(Bin2, OUTPUT);  // declares pin 3 as output
  pinMode(Bin1, OUTPUT);  // declares pin 2 as output
  
}

void loop ( )
{
 
  x_DC = analogRead (x_key_1) ;

  //Serial.println(x_pos_1);
  //Serial.println(y_pos_1);
  
  
   Serial.print(x_DC + String("  "));
  

 if (x_DC > 700)
 {
   analogWrite(Bin2, 253);
   digitalWrite(Bin1, LOW);
   Serial.println("Forward");
   
  }
  if (x_DC > 400 && x_DC <= 700)
 {
   analogWrite(Bin2, 0);
  digitalWrite(Bin1, LOW);
   Serial.println("Brake");

 }
 if (x_DC <= 400)
 {
    analogWrite(Bin2, 0);
    digitalWrite(Bin1, HIGH);
    Serial.println("Backward");
 }

 
}
// foom0009@e.ntu.edu.sg
