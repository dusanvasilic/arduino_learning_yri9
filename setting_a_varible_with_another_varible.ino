int waitTimeOff = 1000; // ms off
int waitTimeOn  = waitTimeOff; // ms on



void setup() {
   pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(waitTimeOn); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(waitTimeOff);
}
