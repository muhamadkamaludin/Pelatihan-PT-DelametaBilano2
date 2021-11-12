int ldr =PB1;
int r =PA1;
int y =PA2;
int g =PA3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ldr, INPUT);
  pinMode(r, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int bacaldr=analogRead(ldr);
  bacaldr = map(bacaldr,4065,0,255,0);
  Serial.print("Nilai ldr");
  Serial.print(bacaldr);
  Serial.println();
  //delay(500);

  //LOGIKA
  analogWrite(r, bacaldr);
  analogWrite(y, bacaldr);
  analogWrite(g, bacaldr);


  

  
}
