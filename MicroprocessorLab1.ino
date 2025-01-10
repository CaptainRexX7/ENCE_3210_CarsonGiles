int fiftyArray[50];

void setup() {
  Serial.begin(9600);
  //PartOne();
  //PartTwo();
  for(int i = 0; i < 50; i++){
    fiftyArray[i] = i+1;
  }
  Serial.print(PartThree());
  
}

void loop() {
  

}

void PartOne(){
  int list[511];
  for(int i = 0; i < 511; i++){
    list[i] = (i^2) * 2;
    Serial.println(list[i]);
  }
}

void PartTwo(){
  double list[361];
  for(int i = 0; i < 361; i++){
    list[i] = cos(((double) i/180)*PI);
    Serial.println(list[i]);
  }
}

int PartThree(){
  int largest = 0;
  int second = 0;
  for(int i = 0; i < 50; i++){
    if(fiftyArray[i] > largest){
      second = largest;
      largest = fiftyArray[i];
    }
  }
  return second;
}
