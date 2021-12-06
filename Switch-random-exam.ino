void setup() {
  // put your setup code here, to run once:
   Serial.begin(115200);
   Serial.println();
   int num=random(1,5);
   switch(num){
    case  1:
      Serial.println("1");
      break;
     case 2:
      Serial.println("2");
      break;
     case 3:
      Serial.println("3");
      break;
     case 4:
      Serial.println("4");
      break;
     
   }
}

void loop() {
  // put your main code here, to run repeatedly:
   
}