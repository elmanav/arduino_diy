int ledPins[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
const int pinCount = sizeof(ledPins) / sizeof(int);

void setup() 
{
  // put your setup code here, to run once:
  for (int idx=0; idx < pinCount; idx++)
  {
    pinMode(ledPins[idx], OUTPUT);
  }

}

void loop() 
{
  int randomIdx = random(pinCount);
  digitalWrite(ledPins[randomIdx], HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(ledPins[randomIdx], LOW);    // turn the LED off by making the voltage LOW
  delay(1000);  
}
