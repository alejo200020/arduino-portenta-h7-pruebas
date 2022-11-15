#define B_AZUL 6
#define B_ROJO 7

void setup()
{
  Serial.begin(9600);
  pinMode(B_AZUL, 0);
  pinMode(B_ROJO, 0);

  pinMode(LEDB, OUTPUT);
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
}
void loop()
{

  //Serial.println(digitalRead(B_AZUL));

  if (digitalRead(B_AZUL) == 0 and digitalRead(B_ROJO) == 0) {
    Serial.println("El Boton Azul y Rojo están presionados");
    digitalWrite(LEDB, LOW); // turn the LED off by making the voltage HIGH
    digitalWrite(LEDR, LOW);
  }

  else {

    if (digitalRead(B_AZUL) == 0 and digitalRead(B_ROJO) == 1) {
      Serial.println("El Boton Azul está presionado");
      digitalWrite(LEDB, LOW); // turn the LED off by making the voltage HIGH
    }

    else {

      if (digitalRead(B_AZUL) == 1 and digitalRead(B_ROJO) == 0) {
        Serial.println("El Boton Rojo está presionado");
        digitalWrite(LEDR, LOW);
      }

      else {
        Serial.println("Ningun Boton está presionado");
      }
    }


    //Serial.println("El Boton Azul no está presionado");
    //digitalWrite(LEDR, LOW);
  }
  
  delay(10);

  digitalWrite(LEDB, HIGH); 
  digitalWrite(LEDR, HIGH);
  digitalWrite(LEDG, HIGH); 
}