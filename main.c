/*
  Created by: Julianne Leblanc-Peltier
  Created on: March 2025
*/

// variables

const int PIN_11 = 11;
const int PIN_12 = 12;
const int PIN_13 = 13;

int blink_time = 1000;

// setup

void setup()
{
  pinMode(11, OUTPUT); // GREEN
  pinMode(12, OUTPUT); // BLUE
  pinMode (13, OUTPUT); // RED
}

// output

void loop()
{
  digitalWrite(11, HIGH); // GREEN
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(blink_time);

  digitalWrite(11, LOW); // BLUE
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(blink_time);
  
  digitalWrite(11, LOW); // RED
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(blink_time);
  
  digitalWrite(11, HIGH); // CYAN
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(blink_time);
  
  digitalWrite(11, LOW); // MAGENTA
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(blink_time);
  
  digitalWrite(11, HIGH); // YELLOW
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(blink_time);
  
  digitalWrite(11, HIGH); // WHITE
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(blink_time);
  
  digitalWrite(11, LOW); // BLACK
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(blink_time);
}
