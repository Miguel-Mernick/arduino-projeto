int valorpot = 0;
float luz = 0;
void setup(){
 Serial.begin (9600);
 pinMode (3, OUTPUT);
 pinMode (A5, INPUT);
}
void loop(){
  valorpot = analogRead(5);
  luz = map (valorpot, 0, 1023, 0, 255);
  Serial.print ("valor lido pelo potenciômetro: ");
  Serial.print (valorpot);
  Serial.print (" = luz: ");
  Serial.println (luz);
  analogWrite (3, luz);
}
