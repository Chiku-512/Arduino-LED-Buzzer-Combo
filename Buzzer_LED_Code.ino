int buttonPin=9;
int buzzerPin=12;
int  ledPin=4;
void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin,INPUT);
  pinMode(buzzerPin,OUTPUT);
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonPin)==HIGH)//If button is pressed
    {
      digitalWrite(buzzerPin,HIGH);
      digitalWrite(ledPin,LOW);
    }
  else
    {
      digitalWrite(buzzerPin,LOW);
      digitalWrite(ledPin,HIGH);
    }
}
