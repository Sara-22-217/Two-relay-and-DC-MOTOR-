//two relay with two motor

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}


void loop()
{
  //the motor will turn counter clockwise for two second 
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  delay(2000);
    //the motor will turn clockwise for two second
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
  delay(2000); 
  
  
  
  
}
