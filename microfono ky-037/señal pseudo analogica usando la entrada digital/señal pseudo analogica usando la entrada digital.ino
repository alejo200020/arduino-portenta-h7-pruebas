const int out_pin=6; // pin digital número 6
const int sample_time=0.01;
unsigned long millisCurrent;
unsigned long millisLast=0;
unsigned long millisElapsed;

int sampleBufferValue=0;
 
void setup() {
Serial.begin(1000000); // setup serial
}

void loop() {
millisCurrent= millis();
millisElapsed= millisCurrent-millisLast;

if(digitalRead(out_pin)==LOW)
{sampleBufferValue++;
} 

if(millisElapsed> sample_time){
  Serial.println(sampleBufferValue);
  sampleBufferValue=0;
  millisLast=millisCurrent;
}

}