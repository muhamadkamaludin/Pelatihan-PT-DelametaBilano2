//INISIALISASI
int r =PA1;
int y =PA2;
int g =PA3;
int buzzer =PA4;
int flame =PA5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (r, OUTPUT);
  pinMode (y, OUTPUT);
  pinMode (g, OUTPUT);
  pinMode (buzzer, OUTPUT);
  pinMode (flame, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int bacaflame = analogRead(flame);
  
  Serial.print("Nilai flame  :");
  Serial.print(bacaflame);
  Serial.println();
  
}
