//INISIALISASI
#include <OneWire.h>
#include <DallasTemperature.h>
#include <NewPing.h>

int r =PA3;
int y =PA4;
int g =PA5;

int echo =PB6;
int trig =PB5;
int flame =PA1;
int batas =400;
int sensorsuhu =8;
int kunci =0;
int bacaflame =0;


OneWire oneWire(sensorsuhu);
DallasTemperature sensors(&oneWire);
NewPing cm(trig,echo,batas);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  sensors.begin();
  pinMode (flame, INPUT);
  pinMode (r, OUTPUT);
  pinMode (y, OUTPUT);
  pinMode (g, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int bacajarak=cm.ping_cm();
  int bacaflame = digitalRead(flame);

  Serial.print("data jarak:");
  Serial.print(bacajarak);
  Serial.print("cm");
  Serial.println();

  Serial.print("nilai flame:");
  Serial.println(bacaflame);
  delay (100);

  if (bacaflame ==0 and kunci==0){
    delay(100);
    kunci=1;
  
  }else if (bacaflame ==0 and kunci==1){
    delay(100);
    kunci=0;
    digitalWrite(r, LOW);
    digitalWrite(y, LOW);
    digitalWrite(g, LOW);
  }
  if (bacajarak <=20 and bacajarak >0 and kunci==1){
    digitalWrite (r, HIGH);
    digitalWrite (y, HIGH);
    digitalWrite (g, HIGH);
    delay (100);
    digitalWrite (r, LOW);
    digitalWrite (y, LOW);
    digitalWrite (g, LOW);
    delay(100);
    }
  if (bacajarak <=50 and bacajarak >=21 and kunci==1){
    digitalWrite (r, HIGH);
    digitalWrite (y, HIGH);
    digitalWrite (g, HIGH);
    delay (500);
    digitalWrite (r, LOW);
    digitalWrite (y, LOW);
    digitalWrite (g, LOW);
    delay (500);
    
    }
  if (bacajarak >50 and kunci==1){
    digitalWrite (r, HIGH);
    delay (100);
    digitalWrite (r, LOW);
    delay (100);
    digitalWrite (y, HIGH);
    delay (100);
    digitalWrite (y, LOW);
    delay (100);
    digitalWrite (g, HIGH);
    delay (100);
    digitalWrite (g, LOW);
    delay (100);
    digitalWrite (y, HIGH);
    delay (100);
    digitalWrite (y, LOW);
    delay (100);
    digitalWrite (r, HIGH);
    delay (100);
    digitalWrite (r, LOW);
    delay (100);
    digitalWrite (y, HIGH);
    delay (100);
    digitalWrite (y, LOW);
    delay (100);
    digitalWrite (g, HIGH);
    delay (100);
    digitalWrite (g, LOW);
    delay (100);
   
  }
}
