const int hallPin = 3;
const int ledPin = 13;

int hallSwitchState = 0;
void setup() {
  pinMode(hallPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  hallSwitchState = digitalRead(hallPin);
  if(hallSwitchState == 0){
    digitalWrite(ledPin, HIGH);  
  }else{
    digitalWrite(ledPin, LOW);  
  }

}
