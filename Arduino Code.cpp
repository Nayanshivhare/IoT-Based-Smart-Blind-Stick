int const TriggerPin = 10;
int const EchoPin = 9;
int const BuzzerPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(TriggerPin, OUTPUT);
  pinMode(EchoPin, INPUT);
  Serial.begin(9600);
  pinMode(BuzzerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int distance,duration;
  digitalWrite(TriggerPin, HIGH);
  delayMicroseconds(2);
  digitalWrite(TriggerPin, LOW);
  delayMicroseconds(5);
  digitalWrite(TriggerPin, HIGH);
  pinMode(EchoPin, INPUT);
  duration = pulseIn(EchoPin, HIGH);
  distance = (duration/2)/29.1;
  if(distance <= 50 && distance >= 0)
  {
    digitalWrite(BuzzerPin, HIGH);
  }
  else
  {
    digitalWrite(BuzzerPin, LOW);
  }
  delay(60);
  }
