const int mqPin = A0;
const int led1 = 7;
const int buz = 10;


void setup() {
  Serial.begin(9600);
  pinMode(mqPin, INPUT);
  pinMode(led1,OUTPUT);
  pinMode(buz,OUTPUT);

}

void loop() {
  int result = analogRead(mqPin);
  Serial.println(result);
  delay(1000);
  if(result>500){
    digitalWrite(led1, HIGH);
    delay(500);
    tone(buz,500,500);
    }
  else{
    digitalWrite(led1, LOW);
    delay(500);
    noTone(buz);
  }
}
 
