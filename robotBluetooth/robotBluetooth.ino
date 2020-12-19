int in1=4 ;
int in2=5 ;
int in3=6 ;
int in4=7 ;
int ena=9 ;
int enb=10;
char c;
void setup() {
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
 pinMode(ena, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(13, OUTPUT);
  
  analogWrite(ena,120);
  analogWrite(enb,120);
  
}

void loop() {
//droite();

  if (Serial.available()) {
    c = Serial.read();
    Serial.println(c);
  
  if (c == '8') {
  avant() ;
  }
  
  else if (c == '2') {
  arriere() ;
  }
  
  else if (c == '4') {
 gauche() ;
  }
  else if (c == '6') {
droite() ; }


  else if (c == '9') {
  buzzer();
  }
  
  else if (c == '7') {
 buzzer();
  }
  
  else if (c == '3') {
 buzzer();
  }
  
  else if (c == '1') {
  buzzer();
  }
  else if (c == '5')
  {buzzer();}
  
else if(c=='s') {
stopp() ;
 }
}

}



void avant(void){
  digitalWrite(in1, 1);
  digitalWrite(in2, 0);
  digitalWrite(in3, 1);
  digitalWrite(in4, 0);
  }
  void arriere(void){
    digitalWrite(in1, 0);
  digitalWrite(in2, 1);
  digitalWrite(in3, 0);
  digitalWrite(in4, 1);}
  void gauche(void){
  digitalWrite(in1, 1);
  digitalWrite(in2, 0);
  digitalWrite(in3, 0);
  digitalWrite(in4, 1);}
  void droite(void){
     digitalWrite(in1, 0);
  digitalWrite(in2, 1);
  digitalWrite(in3, 1);
  digitalWrite(in4, 0);}
  void stopp(void){
digitalWrite(in1, 0);
  digitalWrite(in2, 0);
  digitalWrite(in3, 0);
  digitalWrite(in4, 0);}
    void buzzer(void){
      for(int i=0;i<50;i++){
digitalWrite(13,1);
delayMicroseconds(300) ;  
digitalWrite(13,0);
delayMicroseconds(300) ;}

}

