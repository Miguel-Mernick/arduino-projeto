int button = 2;
int vermelhoC = 13, amareloC =12, verdeC = 11;
int vermelho = 10, verde = 9;

void setup()
{
  pinMode(vermelhoC, OUTPUT);
  pinMode(amareloC, OUTPUT);
  pinMode(verdeC, OUTPUT);
  pinMode(button, INPUT);
  pinMode(verde, OUTPUT);
  pinMode(vermelho, OUTPUT);
}

void loop()
{
   int buttonstart, i,j;
    digitalWrite(vermelho, HIGH);
    digitalWrite(verdeC, HIGH);
  for (j=0; j<= 800;j++){
    delay(50);
    for (i=0;i <= 5;i++){
      buttonstart = digitalRead(button);
      if ( buttonstart == HIGH ){
        delay(5000);
        digitalWrite(verdeC, LOW);
        j=999;
       
        break;
      }
    }
  }
    digitalWrite(verdeC, LOW);
    digitalWrite(amareloC, HIGH);
    delay(3000); 
    digitalWrite(amareloC, LOW);
  
    digitalWrite(vermelhoC, HIGH);
    digitalWrite(vermelho, LOW);
    digitalWrite(verde, HIGH);
    delay(5000); 
    digitalWrite(vermelhoC, LOW);
    digitalWrite(verde, LOW);
  
}
