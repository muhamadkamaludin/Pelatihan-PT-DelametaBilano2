int flame =PA1;
int r =PA3;
int y =PA4;
int g =PA5;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(flame,INPUT);
  pinMode(r, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(g, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int bacaflame=digitalRead(flame);
  
  Serial.print("nilai flame:");
  Serial.print(bacaflame);
  Serial.println();
  delay(500);

  if (bacaflame ==0){
    digitalWrite(r, LOW);
    digitalWrite(y, LOW);
    digitalWrite(g, HIGH);
  }
  else if (bacaflame >=0 and bacaflame <=30){
    digitalWrite(r, LOW);
    digitalWrite(y, HIGH);
    digitalWrite(g, LOW); 
  }
  else if (bacaflame >30){
    digitalWrite(r, HIGH);
    digitalWrite(y, LOW);
    digitalWrite(g, LOW);
  }

  
  





}
