//define speaker pin
const int speaker = A0;

//define octave potentiometer pin
const int octaveKnob = A1;

//piano key pins array
const uint8_t keys[] = {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

//three octaves of notes array
const int notes[] = {
//C,  C#,    D,   D#,   E,   F,   F#,   G,   G#,   A,   A#,   B
 131, 139, 147, 156, 165, 175, 185, 196, 208, 220, 233, 247, // Octave 3
};

//count the number of keys
int numKeys = sizeof(keys);

void setup(){
  //attach keys as inputs
  for (uint8_t i = 0; i < numKeys; i++) {
    pinMode(keys[i], INPUT_PULLUP); //Pull up - mechanical switch only has 2 prongs
  }
  //speaker as output
  pinMode(A0, OUTPUT);
  
  //octave knob as input
  pinMode(A1, INPUT);
}

void loop(){
  int octaveKnobRaw = analogRead(octaveKnob); //read raw output of octave knob
  int octaveMap = map(octaveKnobRaw, 800, 200, 0, 2); //convert raw output to 0 to 2 multiplier scale
  
  int freq = 0; //piano frequency variable
  
  //check state of each key, if a key pressed then change freq to the equivalent tone
  for (uint8_t i=0; i < numKeys; i++) {
    if (digitalRead(keys[i]) == LOW) {
      freq = notes[i]*pow(2,octaveMap); //octaveMap multiplier, every 2x = higher octave
    }
  }
  
  if (freq) { //if freq is anything other than 0, play tone
    tone(speaker, freq);
  }
  else {
    noTone(speaker);
  }
}