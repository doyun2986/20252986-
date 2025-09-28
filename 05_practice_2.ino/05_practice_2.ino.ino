void setup() {
  pinMode(7,OUTPUT);
  digitalWrite(7,0);
  // put your setup code here, to run once:

}

void loop() {
  delay(1000);

  for (int i=0; i<5; i++) {
    digitalWrite(7,1);
    delay(100);
    digitalWrite(7,0);
    delay(100);   
  }

  digitalWrite(7,1);

  while (1) {
    
  }
  // put your main code here, to run repeatedly:

}
