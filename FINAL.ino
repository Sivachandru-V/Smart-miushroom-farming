int ena = 5;
int in1 = 6;
int in2 = 7;
int in3 = 8;
int in4 = 9;
int enb = 10;
int enc = 11;
int in5 = 12;
int in6 = 13;

int z=0;
void setup() {
  pinMode(4,INPUT );
  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enc, OUTPUT);
  pinMode(in5, OUTPUT);
  pinMode(in6, OUTPUT); 
  Serial.begin(9600);
}

void loop() {
 if (z<2){
  int sensorValue = digitalRead(4);
  Serial.println("SENSOR VALUE : ");
  Serial.println(sensorValue);
  if(sensorValue==1){
   
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    analogWrite(ena, 255);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
    analogWrite(enb, 255);
    digitalWrite(in5,LOW);
    digitalWrite(in6,LOW);
    
    }
  else{
       Serial.print("HELLO");
       digitalWrite(in1,LOW);
       digitalWrite(in2,LOW);
       digitalWrite(in3,LOW);
       digitalWrite(in4,LOW);
        
       if(z%2==0){
         digitalWrite(in5,LOW);
         digitalWrite(in6,HIGH);
         analogWrite(enc, 255);
         delay(36000);
         digitalWrite(in5,LOW);
         digitalWrite(in6,LOW);
         z++;
         Serial.print(z);
         
         
         digitalWrite(in1,HIGH);
         digitalWrite(in2,LOW);
         analogWrite(ena, 255);
         digitalWrite(in3,HIGH);
         digitalWrite(in4,LOW);
         analogWrite(enb, 255);
         delay(5000);
         digitalWrite(in1,LOW);
         digitalWrite(in2,LOW);
         digitalWrite(in3,LOW);
         digitalWrite(in4,LOW);}
         
        else if(z%2!=0){
         digitalWrite(in5,HIGH);
         digitalWrite(in6,LOW);
         analogWrite(enc, 130);
         delay(20000);
         digitalWrite(in5,LOW);
         digitalWrite(in6,LOW);
         z++;
         Serial.print(z);
         
         digitalWrite(in1,HIGH);
         digitalWrite(in2,LOW);
         analogWrite(ena, 255);
         digitalWrite(in3,HIGH);
         digitalWrite(in4,LOW);
         analogWrite(enb, 255);
         delay(5000);
         digitalWrite(in1,LOW);
         digitalWrite(in2,LOW);
         digitalWrite(in3,LOW);
         digitalWrite(in4,LOW);}
        }

         }
        
 
}
