void setup() {
pinMode(8,OUTPUT);
//o pinmode é para definir a porta e também para definir entrada e saida
}

void loop() {
//digitalwrite serve para mandar um sinal alto ou baixo para a porta designada
  digitalWrite(8, HIGH);
   delay(1000);
    digitalWrite(8, LOW);
    delay(1000);
}
