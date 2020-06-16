
int i = 0;
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);//设置引脚模式
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  
}

void loop()
{
  for(i=0;i<9;i++)
  {
  digitalWrite(i, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(i, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  }
}
  
