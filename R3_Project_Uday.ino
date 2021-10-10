int pValue = 0;
int firstdigit = 0;
int seconddigit = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}
void loop()
{
  pValue = (analogRead(A0))/10.2399999999999999;
  firstdigit = pValue % 10;
  seconddigit = (pValue/10) %10; 
  if (seconddigit == 9){
    digitalWrite(7,HIGH);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4,HIGH);
  }
  if (seconddigit == 8){
    digitalWrite(7,HIGH);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4,LOW);
  }
  if (seconddigit == 7){
    digitalWrite(7,LOW);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4,HIGH);
  }
  if (seconddigit == 6){
    digitalWrite(7,LOW);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4,LOW);
  }
  if (seconddigit == 5){
    digitalWrite(7,LOW);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(4,HIGH);
  }
  if (seconddigit == 4){
    digitalWrite(7,LOW);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(4,LOW);
  }
  if (seconddigit == 3){
    digitalWrite(7,LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(4,HIGH);
  }
  if (seconddigit == 2){
    digitalWrite(7,LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(4,LOW);
  }
  if (seconddigit == 1){
    digitalWrite(7,LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4,HIGH);
  }
  if (seconddigit == 0){
    digitalWrite(7,LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4,LOW);
  }
  if (firstdigit == 9){
    digitalWrite(3,HIGH);
    digitalWrite(2, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8,HIGH);
  }
  if (firstdigit == 8){
    digitalWrite(3,HIGH);
    digitalWrite(2, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8,LOW);
  }
  if (firstdigit == 7){
    digitalWrite(3,LOW);
    digitalWrite(2, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8,HIGH);
  }
  if (firstdigit == 6){
    digitalWrite(3,LOW);
    digitalWrite(2, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8,LOW);
  } 
  if (firstdigit == 5){
    digitalWrite(3,LOW);
    digitalWrite(2, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8,HIGH);
  }
  if (firstdigit == 4){
    digitalWrite(3,LOW);
    digitalWrite(2, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8,LOW);
  }
  if (firstdigit == 3){
    digitalWrite(3,LOW);
    digitalWrite(2, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(8,HIGH);
  }  
  if (firstdigit == 2){
    digitalWrite(3,LOW);
    digitalWrite(2, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(8,LOW);
  }
  if (firstdigit == 1){
    digitalWrite(3,LOW);
    digitalWrite(2, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8,HIGH);
  }    
  if (firstdigit == 0){
    digitalWrite(3,LOW);
    digitalWrite(2, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8,LOW);
  }
}
