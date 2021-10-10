# uday220-R3-SoftwareTask1-UdayShergill
The way my project works there are 5 volts and a ground going through the breadboard supplying energy to all the compenenents. Then there is a wire sending an analog input from the potentiometer to the port A0 on the ardunio. Then there are four outputs for the first CD4511 decoder from the output ports 4, 5, 6, and 7. The first CD4511 decoder then has outputs on the other side which connects to the seven segment display's corresponding ports. The same is done with the second CD4511 decoder but connected to the output ports 2, 3, 8, and 9. 

![image](https://user-images.githubusercontent.com/91505369/136677523-065fcf52-fbf2-4a49-8c06-db0099dcc27d.png)
The blue wires are the output from the ardunio to the decoder and the light blue wires are the output from the decoder to the seven segment display to show the first digit from the potentiometer.The purple wires are the output from the ardunio to the decoder and the pink wires are the output from the decoder to the seven segment display to show the second digit. The red wires are 5 volts of power, the black wires are the ground, and the white wire is the input wire. 

![image](https://user-images.githubusercontent.com/91505369/136677585-53a5dc52-bf09-4c02-b48a-0b42e336b7d4.png)

The way the code works it first declares all the variables including inputs and outputs in the void setup. Then in the void loop the code does most of it's work, it first calculates a value from the potentiometer to have a value between 0-99. Then it splits the first and second digit into individual integers. Then depending on the integer the arudunio send an output depending on what the value of the digit is and if it is the second or first digit. The pin that gets HIGH or LOW was found by pin overview for the CD4511 decoder. 

Link to TinkerCAD project
https://www.tinkercad.com/things/euwfBH8vGNy
