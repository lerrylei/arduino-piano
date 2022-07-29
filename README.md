# mechKeyPiano
A mechanical keyboard... but the OTHER type of "keyboard."

<img src="https://user-images.githubusercontent.com/41922343/181673997-83c2cdb2-6bba-43cd-b526-fc7d7597d9b4.png" width=80% height=80%>

## About

This DIY 3D printed monophonic (1 key at a time) keyboard uses 12 mechanical keyboard switches for piano keys. It is powered by an Arduino UNO and fitted with a speaker and a potentiometer to change between 3 octaves. Watch the video demo below to see how it sounds!

<a href="https://youtu.be/XHjSW5ESeuM">
  <img src="https://user-images.githubusercontent.com/41922343/181676043-8215ab88-026a-4628-abf6-6570d9eb52a9.png" width=70% height=70%>
</a>


## Design
3D overview of the keyboard case. I printed using a .4mm nozzle and 20% infill. Supports are necessary for some parts but do not put too many. Printing took around 2 days to fully complete all parts but can be reduced signifcantly by reducing infill and lowering the thickness of the walls. Since the STL files were larger than my print area, I had to split the case into [multiple parts](CAD%20Files/Split%20CAD).

<img src="https://user-images.githubusercontent.com/41922343/181350452-c32a6fe4-fa29-4e20-bc20-b5e02175b783.gif" widhth=90% height=90%>

## Assembly
First, gather all necessary parts before building. This includes the 3D printed case, keys and screws, 12 mechanical keyboard switches, 1 potentiometer, 1 speaker/piezo, a mini breadboard, and an Arduino Uno. Components are placed as shown in the second image. 
![IMG_8119](https://user-images.githubusercontent.com/41922343/181683695-05976db4-9936-4c9a-8750-603c0de3d3c8.jpg)
![IMG_8120](https://user-images.githubusercontent.com/41922343/181683877-5d5fe3be-8c35-48a6-82d2-94446f2b07f7.jpg)

## Circuit Diagram
Refer to the following [circuit diagram](Assets/Circuit%20Diagram.png) for information on how to wire components together.

![Circuit Diagram](Assets/Circuit%20Diagram.png)
