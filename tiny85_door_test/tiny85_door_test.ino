const int led = 0;
const int sensor = 2;

int state; // 0 close - 1 open switch

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT_PULLUP);
}

void loop()
{
   state = digitalRead(sensor);
   
   if (state == HIGH){
    digitalWrite(led, HIGH);
   }
   else{
    digitalWrite(led, LOW);
   }
}
