#define sensea 13
#define senseb 12
#define mota 11
#define motb 10
#define motc 9
#define motd 8
#define enablea 4
#define enableb 5
int p,q;
void setup() {
  pinMode(sensea,INPUT);
  pinMode(senseb,INPUT);
  pinMode(mota,OUTPUT);
  pinMode(motb,OUTPUT);
  pinMode(enablea,OUTPUT);
   pinMode(motc,OUTPUT);
  pinMode(motd,OUTPUT);
  pinMode(enableb,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  p=digitalRead(sensea);
  q=digitalRead(senseb);
  if(p==LOW&&q==LOW)
  {digitalWrite(enablea,HIGH);
  digitalWrite(enableb,HIGH);
    digitalWrite(mota,HIGH);
digitalWrite(motb,LOW);
digitalWrite(motc,HIGH);
digitalWrite(motd,LOW);}
else if(p==LOW&&q==HIGH)
  {digitalWrite(enablea,HIGH);
    digitalWrite(mota,HIGH);
digitalWrite(motb,LOW);
digitalWrite(enableb,LOW);}
else if(p==HIGH&&q==LOW)
  {digitalWrite(enableb,HIGH);
    digitalWrite(motc,HIGH);
digitalWrite(motd,LOW);
digitalWrite(enablea,LOW);}
else
{digitalWrite(enablea,LOW);
digitalWrite(enableb,LOW);}
  // put your main code here, to run repeatedly:

}
