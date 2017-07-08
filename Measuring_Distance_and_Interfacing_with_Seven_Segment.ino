int trigpin=12 ,echopin=13 ;
float  speedofsound;
float distance;
int pinGnd=11 ,pinA=3 ,pinB=4 ,pinDp=5, pinC=6 ,pinD=7 ,pinE=8 ,pinF=9 ,pinG=10;
int c,deltime=2000;

void setup(){
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(pinA,OUTPUT);
  pinMode(pinB,OUTPUT);
  pinMode(pinC,OUTPUT);
  pinMode(pinD,OUTPUT);
  pinMode(pinE,OUTPUT);
  pinMode(pinF,OUTPUT);
  pinMode(pinG,OUTPUT);
  Serial.println("Enter the speed of sound in m/s : ");
  while(Serial.available()==0){
  speedofsound=Serial.parseFloat();
  }
  
}
void loop(){
  digitalWrite(trigpin,0);
  delay(1000);
  digitalWrite(trigpin,1);
  delay(10);
  digitalWrite(trigpin,0);
  float pingtime=pulseIn(echopin,1);   // time in microseconds
  distance=speedofsound*pingtime;
  distance=(distance*39)/(2*1000000);  // distance in inches
  Serial.println("The distance in inches is");
  Serial.println(distance);
  if(distance < 20){
    int temp;
    temp  = distance/2;
    c=temp;
    Serial.println(c);
     if(c==1){
  digitalWrite(pinGnd,1);
  digitalWrite(pinDp,1);
  digitalWrite(pinA,1);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,1);
  digitalWrite(pinE,1);
  digitalWrite(pinF,1);
  digitalWrite(pinG,1);
delay(deltime);
  }
else if(c==2){
  digitalWrite(pinGnd,1);
  digitalWrite(pinDp,1);
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,1);
  digitalWrite(pinD,0);
  digitalWrite(pinE,0);
  digitalWrite(pinF,1);
  digitalWrite(pinG,0);
delay(deltime);
}
else if(c==3){
  digitalWrite(pinGnd,1);
  digitalWrite(pinDp,1);
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,1);
  digitalWrite(pinF,1);
  digitalWrite(pinG,0);
delay(deltime);
}
else if(c==4){
  digitalWrite(pinGnd,1);
  digitalWrite(pinDp,1);
  digitalWrite(pinA,1);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,1);
  digitalWrite(pinE,1);
  digitalWrite(pinF,0);
  digitalWrite(pinG,0);
delay(deltime);
}
else if(c==5){
  digitalWrite(pinGnd,1);
  digitalWrite(pinDp,1);
  digitalWrite(pinA,0);
  digitalWrite(pinB,1);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,1);
  digitalWrite(pinF,0);
  digitalWrite(pinG,0);
delay(deltime);
}
else if(c==6){
  digitalWrite(pinGnd,1);
  digitalWrite(pinDp,1);
  digitalWrite(pinA,0);
  digitalWrite(pinB,1);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,0);
  digitalWrite(pinF,0);
  digitalWrite(pinG,0);
delay(deltime);
}
else if(c==7){
  digitalWrite(pinGnd,1);
  digitalWrite(pinDp,1);
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,1);
  digitalWrite(pinE,1);
  digitalWrite(pinF,1);
  digitalWrite(pinG,1);
delay(deltime);
  }
else if(c==8){
  digitalWrite(pinGnd,1);
  digitalWrite(pinDp,1);
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,0);
  digitalWrite(pinF,0);
  digitalWrite(pinG,0);
delay(deltime);
}
else if(c=9){
  digitalWrite(pinGnd,1);
  digitalWrite(pinDp,1);
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,1);
  digitalWrite(pinE,1);
  digitalWrite(pinF,0);
  digitalWrite(pinG,0);
delay(deltime);
}
  }
  else{
  digitalWrite(pinGnd,1);
  digitalWrite(pinDp,1);
  digitalWrite(pinA,0);
  digitalWrite(pinB,0);
  digitalWrite(pinC,0);
  digitalWrite(pinD,0);
  digitalWrite(pinE,0);
  digitalWrite(pinF,0);
  digitalWrite(pinG,1);
delay(deltime);
}
}

