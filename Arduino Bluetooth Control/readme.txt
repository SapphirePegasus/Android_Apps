This is an android app to control 10 features of an arduino robot or car or anything with the help of HC-05 bluetooth module. 
Just copy the Code into your Arduino IDE and upload it onto your arduino board. 
Then download the Android app on your smartphone to control the robot.
Connect the app with the arduino with bluetooth.

Circuit Instructions:
  Connect the bluetooth module's VC or POWER pin with 5V on the Arduino
  Connect the bluetooth module's GND with GND on the Arduino
  Connect TX of bluetooth to RX of Arduino* 
  Connect RX of bluetooth to TX of Arduino* 
  Now for the rest of the control connect the SIGNAL or DATA line with the digital output pins on the Arduino**
  And the VC pin with 5V on the Arduino**
  And the GROUND pin with GND on the Arduino
  
  * (DISCONNECT WHILE UPLOADING THE CODE OTHERWISE IT WILL NOT WORK)
  ** WHERE THERE ARE 3 LINES : +5V, GND, SIGNAL THEN ONLY CONNECT SIGNAL TO DIGITAL OUTPUT PINS OTHERWISE
     CONNECT THE +5V LINE OF THE ELECTRONIC ITEM DIRECTLY TO THE DIGITAL OUTPUT PINS
