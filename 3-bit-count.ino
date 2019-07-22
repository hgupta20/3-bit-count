/*
  Description: Use two push buttons and three LEDs for this circuit.
  The push buttons will change an internal “3-bit count”. The 
  LED’s will display the value of this internal “3-bit count”.
  
  References: button, example program
*/
const int buttonUp= 12;     // the number of the pushbutton pin for up
const int buttonDown=11;    // the number of the pushbutton pin for down
const int ledPin4= 7;             // the number of the LED pin for 3rd bit
const int ledPin2= 8;             // the number of the LED pin for 2nd bit
const int ledPin1= 9;             // the number of the LED pin for 1st bit
 
// variables will change:
int buttonStateUp = 0;         // variable for reading the pushbutton status
int buttonStateDown = 0;         // variable for reading the pushbutton status
int counter = 0;
int temp = 0;
int previousStateUp = 0;
int previousStateDown =0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin4, OUTPUT);       // led pin 3rd bit
  pinMode(ledPin2, OUTPUT);       // led pin 2nd bit 
  pinMode(ledPin1, OUTPUT);       // led pin 1st bit
  // initialize the pushbutton pin as an input:
  pinMode(buttonUp, INPUT);
  pinMode(buttonDown, INPUT);

  digitalWrite(ledPin4, LOW);     // initialize everything to low
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin1, LOW);
  
}

void loop() {
  // read the state of the pushbutton value:
  buttonStateUp = digitalRead(buttonUp);      // Read the state of the button
  buttonStateDown = digitalRead(buttonDown);   // Read the state of the down button

  if(buttonStateUp != previousStateUp){         // compare the presses
    if(buttonStateUp == LOW){
      counter ++;                                // increment the counter
    }
  }
  if(buttonStateDown != previousStateDown){     // compare the presses
    if(buttonStateDown == LOW){ 
      counter--;                                // decrement the counter
    }
  }
  previousStateUp = buttonStateUp;              // store the last press
  previousStateDown = buttonStateDown;          // store the last press for down button

  if(counter > 7){                              // make the counter go back to 7 or 0 after reached the limit
    counter = 0;
  }
  else if(counter < 0 ){
    counter = 7;
  }
  if(counter%2 == 1){                           // use mod operation to find the biary digits
    digitalWrite(ledPin4, HIGH);
  }
  temp = counter/2;               
  if( temp%2 == 1){
    digitalWrite(ledPin2, HIGH);
  }
  temp = temp/2;
  if( temp%2 == 1){
    digitalWrite(ledPin1, HIGH)
  }
  
  
}
