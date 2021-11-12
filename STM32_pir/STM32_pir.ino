int pir =PA2;
int r =PA3;
int y =PA4;
int g =PA5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (pir, INPUT);
  pinMode (r, OUTPUT);
  pinMode (y, OUTPUT);
  pinMode (g, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int bacapir=digitalRead(pir);

  Serial.print("nilai pir:");
  Serial.println(bacapir);

  if (bacapir ==0){
    digitalWrite(r, HIGH);
    
    digitalWrite(y, HIGH);
    delay (200);
    
    digitalWrite(y, LOW);
    digitalWrite(g, LOW);
    
  }else{
    if (bacapir ==1){
      digitalWrite(y, LOW);
      digitalWrite(r, LOW);
      digitalWrite(g, HIGH);

      
     
    }
  }
}
