//Dimmable LED mini Project in Arduino UNO
int readpin=A2;
int potval;
float ledval;
int delayt=250;
int greenpin=9;


void setup()
{
  pinMode(readpin,INPUT);
  pinMode(greenpin,OUTPUT);
  Serial.begin(9600);
 
}


void loop()
{
  
  potval=analogRead(readpin);
  ledval=(255.0/1023.0)*potval;
  analogWrite(greenpin,ledval);
  Serial.println(ledval);
  delay(delayt);
  
}

//Connections:

//One end of potentiometer to 5V.... other end to ground
// the middle to A2

//resitor with cathode of led
//other end of the resistor to ~9V... and led anode to gnd
