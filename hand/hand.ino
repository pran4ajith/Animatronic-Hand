#include <Servo.h>

Servo servo_1;
Servo servo_2;
Servo servo_3;
Servo servo_4;
Servo servo_5;

int flex_1 = 0; //Thumb
int flex_2 = 1; //Index
int flex_3 = 2; //Middle
int flex_4 = 3; //Ring
int flex_5 = 4; //Pinky
int flex_value=0;

void setup()  
{
  Serial.begin(9600);
  servo_1.attach(5);
  servo_2.attach(3);
  servo_3.attach(9);
  servo_4.attach(10);
  servo_5.attach(6);
}


void loop()
{
<<<<<<< HEAD
  //Test
   // int sensorValue = analogRead(A1);
   // Serial.println(sensorValue);
   
  //Thumb
=======
  int sensorValue = analogRead(A0);
>>>>>>> 3a56df7ca7ac3bdb40bf75144b2ce3f9cc1098d9
  int flex_1_pos;  
  int servo_1_pos;  
  Serial.println(sensorValue);
  flex_1_pos = analogRead(flex_1); 
<<<<<<< HEAD
  servo_1_pos = map(flex_1_pos, 770, 860, 180, 0); 
  servo_1_pos = constrain(servo_1_pos, 0, 180);  
  servo_1.write(servo_1_pos);

  //Index
  int flex_2_pos;  
  int servo_2_pos;  
  flex_2_pos = analogRead(flex_2); 
  servo_2_pos = map(flex_2_pos, 770, 780, 180, 0); 
=======
  servo_1_pos = map(flex_1_pos, 860, 925, 180, 0); 
  servo_1_pos = constrain(servo_1_pos, 0, 180);  
  servo_1.write(servo_1_pos);

  int flex_2_pos;  
  int servo_2_pos;  
  flex_1_pos = analogRead(flex_1); 
  servo_2_pos = map(flex_1_pos, 860, 925, 180, 0); 
>>>>>>> 3a56df7ca7ac3bdb40bf75144b2ce3f9cc1098d9
  servo_2_pos = constrain(servo_2_pos, 0, 180);  
  servo_2.write(servo_2_pos);
  
  //Middle
  int flex_3_pos;  
  int servo_3_pos;  
<<<<<<< HEAD
  flex_3_pos = analogRead(flex_3); 
  servo_3_pos = map(flex_3_pos, 770, 850, 0, 180); 
=======
  flex_1_pos = analogRead(flex_1); 
  servo_3_pos = map(flex_1_pos, 860, 925, 0, 180); 
>>>>>>> 3a56df7ca7ac3bdb40bf75144b2ce3f9cc1098d9
  servo_3_pos = constrain(servo_3_pos, 0, 180);  
  servo_3.write(servo_3_pos);
 
  //Ring
  int flex_4_pos;  
  int servo_4_pos;  
<<<<<<< HEAD
  flex_4_pos = analogRead(flex_4); 
  servo_4_pos = map(flex_4_pos, 780, 875, 180, 0); 
=======
  flex_4_pos = analogRead(flex_1); 
  servo_4_pos = map(flex_1_pos, 860, 925, 180, 0); 
>>>>>>> 3a56df7ca7ac3bdb40bf75144b2ce3f9cc1098d9
  servo_4_pos = constrain(servo_4_pos, 0, 180);  
  servo_4.write(servo_4_pos);
  
  //Pinky
  int flex_5_pos;  
  int servo_5_pos;  
<<<<<<< HEAD
  flex_5_pos = analogRead(flex_5); 
  servo_5_pos = map(flex_5_pos, 860, 945, 180, 0); 
=======
  flex_1_pos = analogRead(flex_1); 
  servo_5_pos = map(flex_1_pos, 860, 925, 180, 0); 
>>>>>>> 3a56df7ca7ac3bdb40bf75144b2ce3f9cc1098d9
  servo_5_pos = constrain(servo_5_pos, 0, 180);  
  servo_5.write(servo_5_pos);
 
}


/*

//TESTING THE FLEX
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue ;//* (5.0 / 1023.0);
  // print out the value you read:
  Serial.println(voltage);
}

*/
