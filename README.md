# 3-bit-count
The LED’s will display the value of internal “3-bit count”.
Use two push buttons and three LEDs for this circuit. The push buttons will change an internal “3-bit
count”. The LED’s will display the value of this internal “3-bit count”.
• One push button will increment the 3-bit count. This is the “up button”.
• The other push button should decrement the 3-bit count. This is the “down button”.
• The 3-bit count value will be displayed on the three LEDs in binary
o one LED per binary digit
o a binary digit of 1 is indicated when the LED is on
You should write code to keep track of the number of button presses and algorithmically convert that
number to a binary output. Your code should NOT just be implementing a giant lookup table to translate
to binary, and solutions which do so will not receive credit.
Your lights should increment (or decrement) by one each time a push button is pressed. If we continually
depress the push button, the lights should not run up (or down) to 7 (or 0) (i.e. it should only change the
value once per button press).
Also document what happens when you reach 7 and press the “up button” (or reach 0 and press the
“down button”).
