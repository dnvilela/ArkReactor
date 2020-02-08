int ledPin1 = 11;
int ledPin2 = 12;
float sinVal;
int ledVal;
void setup() {
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
}
void loop() {
for (int x=0; x<180; x++) {
// converte graus para radianos e, então, obtém o valor do seno
sinVal = (sin(x*(3.1416/180)));
ledVal = int(sinVal*255);
analogWrite(ledPin1, ledVal);
delay(10);
}
digitalWrite(ledPin2, HIGH);
}
