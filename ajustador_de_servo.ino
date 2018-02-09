 // incluimos la libreria del servomotor
 #include <Servo.h>

   // Le indicamos a la libreria que vamos a usar
  // un solo servomotor llamado "ServoMotor"
Servo ServoMotor;

void setup() {
  
    ServoMotor.attach(6);
}

void loop() {
  ServoMotor.write(180); // Ajustamos el servo a 180 grados

}
