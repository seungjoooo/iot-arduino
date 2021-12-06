
void setup() {
  // put your setup code here, to run once:
 Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  String longStr="12.5,323";
   int commaPos;
  String numStr1;
  String numStr2;
  commaPos=longStr.indexOf(",");
  numStr1=longStr.substring(0,commaPos);
  numStr2=longStr.substring(commaPos+1);
 int num2;
 float num1;
  num1=numStr1.toFloat();
  num2=numStr2.toInt();
  Serial.println(num1);
  Serial.println(num2);
  
  