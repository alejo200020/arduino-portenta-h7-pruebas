void setup() {
Serial.begin(9600); // setup serial
}

void loop() {
Serial.println(analogRead(A0)); // señal de la entrada analógica del pin A0, sin necesidad de librerías
}
