int A=2,B=3,C=4,D=5,E=6,F=7,G=8 , buzzer=9,ir=24 ,ir2=25,i=0,x,x2,pumb=10,Led=11 ,red=22,green=23;

void setup() {
for(int i=2;i<12;i++){
  pinMode(i,OUTPUT);
  }
pinMode(ir,INPUT);
pinMode(ir2,INPUT);
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
Serial.begin(9600);
}

void loop() {

 x=digitalRead(ir);
 x2=digitalRead(ir2);
 digitalWrite(green,1);
 digitalWrite(pumb,0);
digitalWrite(Led,0);
digitalWrite(red,0);
if(i==0){ for(int j=2;j<10;j++){
  digitalWrite(j,0);
  }
  
  }
if(x==0){
  digitalWrite(pumb,1);
  digitalWrite(Led,1);
  digitalWrite(red,1);
  digitalWrite(green,0);
   for(int k=0;k<10;k++){
 x2=digitalRead(ir2);
if(x2==0){i=0;break;}
Serial.println(i);
digitalWrite(buzzer,0);

   for(int j=2;j<9;j++){
  digitalWrite(j,1);
  }

if(i==1 || i==4){
digitalWrite(A,0);
    }if(i==5 || i==6){
    digitalWrite(B,0);
    }
  if(i==2){
  digitalWrite(C,0);
  }
  if(i==1 || i==4 || i==7){
  digitalWrite(D,0);
  }if(i==1 || i==3 || i==4 || i==5 || i==7 || i==9){
  digitalWrite(E,0);
  }if(i==1 || i==3 || i==2  || i==7 ){
  digitalWrite(F,0);
  }if(i==0 || i==1 || i==7 ){
  digitalWrite(G,0);
  }
  for(int p=1;p<11;p+=2){ if(p==i){digitalWrite(buzzer,1);}}
if(x2==0){i=0;break;}
delay(1000);
i++;
if(i==10){
  i=0;
}

}}

}
