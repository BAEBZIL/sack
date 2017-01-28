int led=13;
void setup() {
  pinMode(led,OUTPUT);

}

void loop() {
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);
  digitalWrite(led,high);
  delay(500);
  digitalWrite(led,low);
  delay(500);
}
