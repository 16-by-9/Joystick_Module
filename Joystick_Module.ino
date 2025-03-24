const int LRpin = A0;
const int UDpin = A1;

int LR;
int UD;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
LR = analogRead(LRpin);
UD = analogRead(UDpin);

Serial.print("LR: ");
Serial.print(LR);
Serial.print(" UD: ");
Serial.println(UD);
delay(500);
}
