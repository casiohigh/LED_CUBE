#define pin7_8 4 
#define pin5_6 7 
#define pin3_4 5 
#define pin1_2 6 
#define pinup 8
#define pindown 9 


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(pin7_8, OUTPUT);
pinMode(pin5_6, OUTPUT);

pinMode(pin3_4, OUTPUT);
pinMode(pin1_2, OUTPUT);

pinMode(pinup, OUTPUT);
pinMode(pindown, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
 char c = Serial.read();
 Serial.println(c);

 if(c == '1'){
 digitalWrite(pin1_2, HIGH);
 digitalWrite(pin3_4, LOW);
 digitalWrite(pin5_6, LOW);
 digitalWrite(pin7_8, LOW);

 digitalWrite(pinup, HIGH);
 digitalWrite(pindown, LOW);

 }
 else if(c == '2'){
 digitalWrite(pin1_2, HIGH);
 digitalWrite(pin3_4, LOW);
 digitalWrite(pin5_6, LOW);
 digitalWrite(pin7_8, LOW);

 digitalWrite(pinup, LOW);
 digitalWrite(pindown, HIGH);
 
 delay(3);
 
  digitalWrite(pin1_2, LOW);
 digitalWrite(pin3_4, HIGH);
 digitalWrite(pin5_6, HIGH);
 digitalWrite(pin7_8, LOW);

 digitalWrite(pinup, HIGH);
 digitalWrite(pindown, LOW);

 delay(3);

 }

 
} 
