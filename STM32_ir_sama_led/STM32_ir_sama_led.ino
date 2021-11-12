int ir=PA2;
int r =PA3;
int y =PA4;
int g =PA5;
int kunci1 =0;
int bacair=0;
int convert (int x){
  if(x==1){
    x=0;
 }else{
  x=1;
 }
return x;
}




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(r,OUTPUT);
  pinMode(y,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(ir,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int bacair=digitalRead(ir);
  bacair    =convert(bacair);

  Serial.print("kondisi ir:");
  Serial.println(bacair);

  if (bacair ==1 and kunci1==0){
    delay(500);
    digitalWrite(r, HIGH);
    kunci1=1;
    
  }else if (bacair ==1 and kunci1==1){
    delay(500);
    digitalWrite(r, LOW);
    kunci1=0;
  }

}
  
