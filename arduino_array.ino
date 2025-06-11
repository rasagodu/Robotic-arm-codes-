#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
void setup() {

  Serial.begin(9600); 
  servo1.attach(9);
  servo2.attach(8);
  servo3.attach(7);
  servo4.attach(6);
  servo5.attach(5);
  servo6.attach(4);
}

void loop() {
  int val_1, val_2, val_3, val_4, val_5, val_6;
  String string=Serial.readStringUntil('\n');
  if(string.startsWith("servo")){
  
       int first_comma = string.indexOf(',');
       int second_comma= string.indexOf(',', first_comma +1);
       int third_comma= string.indexOf(',', second_comma +1);
       int fourth_comma= string.indexOf(',', third_comma +1);
       int fifth_comma= string.indexOf(',', fourth_comma +1);
       int sixth_comma= string.indexOf(',', fifth_comma +1);
      String substring_angle1=string.substring(first_comma + 1, second_comma);
      String substring_angle2=string.substring(second_comma + 1, third_comma);
      String substring_angle3=string.substring(third_comma + 1, fourth_comma );
      String substring_angle4=string.substring(fourth_comma + 1, fifth_comma);
      String substring_angle5=string.substring(fifth_comma + 1, sixth_comma );
      String substring_angle6=string.substring(sixth_comma);
      val_1 = substring_angle1.toInt();
      val_2 = substring_angle2.toInt();
      val_3 = substring_angle3.toInt();
      val_4 = substring_angle4.toInt();
      val_5 = substring_angle5.toInt();
      val_6 = substring_angle6.toInt(); 
      if (val_1 >= 0 && val_1 <= 180) {
        Serial.println(val_1);
        servo1.write(val_1);
      }
      if (val_2 >= 0 && val_2 <= 180) {
        Serial.println(val_2);
        servo2.write(val_2);
      }
      if (val_3 >= 0 && val_3 <= 180) {
        Serial.println(val_3);
        servo3.write(val_3);
      }
      if (val_4 >= 0 && val_4 <= 180) {
        Serial.println(val_4);
        servo4.write(val_4);
      }
      if (val_5 >= 0 && val_5 <= 180) {
        Serial.println(val_5);
        servo5.write(val_5);
      }
      if (val_6 >= 0 && val_6 <= 180) {
        Serial.println(val_6);
        servo6.write(val_6);
      }
      delay(1000);
  
      
    }
  }
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
