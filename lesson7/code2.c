int pinInterrupt = 2; //接中断信号的脚
 
void onChange()
{
   if ( digitalRead(pinInterrupt) == LOW )
      Serial.println("Key Down");
   else
      Serial.println("Key UP");
}
 
void setup()
{
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    Serial.begin(9600); 

 
   pinMode( pinInterrupt, INPUT);//设置管脚为输入
   
   //Enable中断管脚, 中断服务程序为onChange(), 监视引脚变化
   attachInterrupt( digitalPinToInterrupt(pinInterrupt), onChange, CHANGE);
}
 
void loop()
{
  
  for (int i = 0; i < 100; i++)
  {
    digitalWrite(2,i&0x1);
    digitalWrite(3,(i>>1)&0x1);
    digitalWrite(4,(i>>2)&0x1);
    digitalWrite(5,(i>>3)&0x1);
    delay(1000); 
    if(digitalRead(pinInterrupt) )
    i=0;
    if(i==9) i=0;
  }
}