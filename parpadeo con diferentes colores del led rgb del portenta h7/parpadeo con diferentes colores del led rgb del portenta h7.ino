// the setup function runs once when you press reset or power the board
void setup() {
    // initialize digital pin LED_BUILTIN as an output.
   pinMode(LEDB, OUTPUT);
   pinMode(LEDR, OUTPUT);
   pinMode(LEDG, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
   digitalWrite(LEDB, LOW); // turn the LED on (LOW is the voltage level)
   delay(200); // wait for 200 milliseconds
   digitalWrite(LEDB, HIGH); // turn the LED off by making the voltage HIGH
   delay(200); // wait for 200 milliseconds

   digitalWrite(LEDR, LOW); // turn the LED on (LOW is the voltage level)
   delay(200); // wait for 200 milliseconds
   digitalWrite(LEDR, HIGH); // turn the LED off by making the voltage HIGH
   delay(200); // wait for 200 milliseconds

   digitalWrite(LEDG, LOW); // turn the LED on (LOW is the voltage level)
   delay(200); // wait for 200 milliseconds
   digitalWrite(LEDG, HIGH); // turn the LED off by making the voltage HIGH
   delay(200); // wait for 200 milliseconds

   digitalWrite(LEDB, LOW); // turn the LED on (LOW is the voltage level)
   digitalWrite(LEDR, LOW);
   delay(2000); // wait for 200 milliseconds
   digitalWrite(LEDB, HIGH); // turn the LED off by making the voltage HIGH
   digitalWrite(LEDR, HIGH);
   delay(200); // wait for 200 milliseconds
}