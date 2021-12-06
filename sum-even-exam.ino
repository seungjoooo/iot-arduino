void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println();
  int sum = 0;
  const int maxNum=50;
  for(int i=0; i<=maxNum ; i++){
    if( i%2==0){
      sum = sum+1;
      
    }
  }
  Serial.println(sum);
}

void loop() {
  // put your main code here, to run repeatedly:

}