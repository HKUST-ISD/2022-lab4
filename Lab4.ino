//**************************//
// Skeleton code of LAB 4   //
//**************************//
#define ANALOG_OUT    5
#define ANALOG_IN     0
 
void setup() {
  Serial.begin(9600);
  analogWrite(ANALOG_OUT, 0);
  delay(1000);
  
  for (int onPeriod = 0; onPeriod < 255; onPeriod++) {
    analogWrite(ANALOG_OUT, onPeriod);
    Serial.print(onPeriod);
    Serial.print('\t');
 
    // TASK 1
    // analog read from ANALOG_IN pin and process the data, so that
    // vin equals to voltage at ANALOG_IN pin in volts (V)
    float vin = ;    
    Serial.print(vin, 6);
    Serial.print('\t');
 
    // TASK 2
    // calculate current in amps (A) flowing through the device under test (DUT), given
    // vin, the measured voltage across the DUT
    // onPeriod, the ON period of the 5V output PWM signal, ranging from 0 to 255
    // 44000 ohms is the resistance between the PWM output and the DUT
//    float current = ;            // UNCOMMENT FOR TASK 2
//    Serial.print(current, 9);      // UNCOMMENT FOR TASK 2
 
    Serial.println();
    delay(10);
  }
 
  // Press reset button for a new sweep
 
}
 
void loop() {
  
 
}
