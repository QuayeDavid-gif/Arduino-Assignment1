
int ledpin = 13;
  int startvalue = 5;
  // A function for the led to flasha specified amount of times.
  void flashLED(int times){
    int flash = 0;

    while(flash < times){
      digitalWrite(ledpin,HIGH);
      delay(250);
      digitalWrite(ledpin,LOW);
      delay(250);
      flash++;
    }
  }
void setup() {
  pinMode(ledpin,OUTPUT);
  Serial.begin(9600);

  Serial.println("===Countdown Starting=== ");
  int count = startvalue;

  while (count > 0){
    Serial.print("Counter is: ");
    Serial.println(count);

    //LED blinks according to the current coumter value
    flashLED(count);

    delay(1000);
    count--;


  }
  
Serial.println("===Countdown Complete===");


}

void loop() {
  // put your main code here, to run repeatedly:

}
