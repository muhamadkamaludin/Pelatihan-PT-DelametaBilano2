int ldr=PA1;
int ir=PA2;
int r =PA3;
int y =PA4;
int g =PA5;
int kunci1 ;
int bacair=0;





void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(r,OUTPUT);
  pinMode(y,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(ir,INPUT);
  pinMode(ldr,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int bacair=digitalRead(ir);
  
  int bacaldr = analogRead(ldr);
  bacaldr = map (bacaldr,4065,0,255,0);

  Serial.print("kondisi ir:");
  Serial.println(bacair);
  Serial.print("kondisi ldr:");
  Serial.println(bacaldr);

  if (bacair ==0 and kunci1==0){
    delay(500);
   
    kunci1=1;
    
  }else if (bacair ==0 and kunci1==1){
    delay(500);
    kunci1=0;
    digitalWrite(r, LOW);
    digitalWrite(y, LOW);
    digitalWrite(g, LOW);
    
  }
    if (bacaldr>=200 and kunci1 ==1){
      delay (100);
      digitalWrite(r,LOW);
      digitalWrite(y,LOW);
      digitalWrite(g,HIGH);
    }

    if (bacaldr >=100 and bacaldr <=200 and kunci1 ==1){
      delay(100);
      digitalWrite(r, LOW);
      digitalWrite(y, HIGH);
      digitalWrite(g, LOW);
    }

    if (bacaldr >=0 and bacaldr <=100 and kunci1 ==1){
      delay(100);
      digitalWrite(r,HIGH);
      digitalWrite(y,LOW);
      digitalWrite(g,LOW);
    }
}
