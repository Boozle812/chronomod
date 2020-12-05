void setup() {
  // runs once upon startup

  // test LEDs for visual feedback (temporary)
  int ledGreen = 0;
  int ledBlue = 1;
  int ledYellow = 2;
  
  // three potentiometers. analogRead returns values between 0 and 1023
  int mainPotentiometer = 14;
  int volumePotentiometer = 15;
  int brightnessPotentiometer = 16;

  //setting pinMode of previously defined pins
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(ledYellow, OUTPUT);

  pinMode(mainPotentiometer, INPUT);
  pinMode(volumePotentiometer, INPUT);
  pinMode(brightnessPotentiometer, INPUT);
}

void loop() {
  // runs once every clock cycle

}
