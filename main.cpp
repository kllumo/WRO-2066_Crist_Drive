#define ena 2
#define in1 3
#define in2 4
#define in3 5
#define in4 6
#define enb 7
int power = 25;

void setup(){
   pinMode(ena, OUTPUT);
   pinMode(in1, OUTPUT);
   pinMode(in2, OUTPUT);
   pinMode(in3, OUTPUT);
   pinMode(in4, OUTPUT);
   pinMode(enb, OUTPUT);

   digitalWrite(in1, LOW);
   digitalWrite(in2, LOW);
   digitalWrite(in3, LOW);
   digitalWrite(in4, LOW);
}

void loop() {
  analogWrite(ena, power);
  analogWrite(enb, power);

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  
}
