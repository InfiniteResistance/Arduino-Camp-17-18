const int hallPin = 2;
const int ledPin = 3;

int hallSwitchState = 0;
void setup() {
  pinMode(hallPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  hallSwitchState = digitalRead(hallPin);
  if(hallSwitchState != 0){
    digitalWrite(ledPin, HIGH);  
  }else{
    digitalWrite(ledPin, LOW);  
  }

}
