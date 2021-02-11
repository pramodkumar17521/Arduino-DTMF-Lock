# Arduino-DTMF-Lock

***I completed this project on 30 Sept. 2018 in 3rd Semester of B. Tech***********

I think this is unique type of lock you find on Internet or github because its not easy to make password based lock using DTMF

As we all know that we can control or automate things using our mobile keypad through DTMF Module.
So I designed a lock system which can locked and unlocked using a password entered through our mobile after connecting it to the module.
DTMF receives the key value pressed on mobile as a input in its four digital input pins which generates value in binary.
eg. If I press 1 on mobile then I receive 0 0 0 1 as four inputs in DTMF input pins.
The main problem with DTMF is that until I press a new key, it continuously reads or repeats previous key input.
means if previously I pressed 1 then it continuously shows 0 0 0 1 as input or sensing value until we press another key.
This continuous flow was the main problem in making password based lock.
I tried to break this continuous flow by using some programming techniques.

***************************************************HOW TO USE*****************************************************
I impleaments the code for 4 digit long password but you can increase its length according to your need.
Attention: 
- Before start entering password you have press #.
- Then enter your 4 digits password.
- Then press * at the end.

**********************************************************************************************************************

This # indicates that I am start entering my password 
and * indicates that I successfully entered my password.
this indications helps in dealing with continuous flow inputs.
