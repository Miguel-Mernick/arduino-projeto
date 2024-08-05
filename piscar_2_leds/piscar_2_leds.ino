void setup() {
//o pinmode é para definir a porta e também para definir entrada e saida
 pinMode(8,OUTPUT);
 pinMode(7,OUTPUT);

}

void loop() {
 //digitalwrite serve para mandar um sinal alto ou baixo para a porta designada
 digitalWrite(8,HIGH);
 digitalWrite(7,HIGH);
 delay(1000);
 digitalWrite(8,LOW);
 digitalWrite(7,LOW);
delay(1000);
}
