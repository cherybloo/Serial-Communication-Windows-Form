// Testing the Serial Communication between Arduino Uno and
// a simple button Windows-Form App in C#

#define led 13

void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop(){
  char userInput = Serial.read();
  if(userInput=='1') digitalWrite(led,HIGH);
  if(userInput=='0') digitalWrite(led,LOW);
}