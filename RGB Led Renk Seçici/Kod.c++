int mavi=0;
int kirmizi=0;
int yesil=0;
void setup()
{
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(5)==1)
  {
    mavi=0;
    yesil=0;
    Serial.println(kirmizi);
    kirmizi++;
    delay(15);
    if(kirmizi>=255)
    {
      kirmizi=0;
    }
  }
  if(digitalRead(6)==1)
  {
    mavi=0;
    kirmizi=0;
    Serial.println(yesil);
    yesil++;
    delay(15);
    if(yesil>=255)
    {
      yesil=0;
    }
  }
  if(digitalRead(7)==1)
  {
    kirmizi=0;
    yesil=0;
    Serial.println(mavi);
    mavi++;
    delay(15);
    if(mavi>=255)
    {
      mavi=0;
    }    
  }
  analogWrite(9,kirmizi);
  analogWrite(11,yesil);
  analogWrite(10,mavi);
}