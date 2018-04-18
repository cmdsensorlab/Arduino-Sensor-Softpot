//SOFTPOT QUICK START GUIDE
//PROVIDED BY THE CMD SENSORLAB CREW
//CREATED ON 18-4-2018
//V1.0
//DON'T PANIC

int sensorpin = A0; //ANALOG INPUT

void setup(){
  Serial.begin(9600); //ARDUINO SERIAL SPEED
  pinMode(sensorpin, INPUT);  //DECLARE PIN AS INPUT
}

void loop(){
  int softpotval = analogRead(sensorpin); //MAKE INTEGER WITH SENSOR VALUE
  Serial.println(softpotval); //PRINT VALUE IN TERMINAL
  delay(5); //SET DELAY FOR DEBUGGING
}

