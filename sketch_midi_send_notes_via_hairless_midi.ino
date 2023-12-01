#include <MIDI.h>

struct MySettings : public midi::DefaultSettings
{
  static const long BaudRate = 115200;  // Set a baud rate that Hairless midi can handle.  The default settings do not work
};
MIDI_CREATE_CUSTOM_INSTANCE(HardwareSerial, Serial, MIDI, MySettings);

// Define the MIDI notes and velocity
const int channel = 1;
const int velocity = 127;   // Velocity (0 to 127)

void setup() {    
  // Initialize the MIDI library
  MIDI.begin();
}

void loop() {
  // Play notes from F3 (53) to A6 (93):
  // For each note from 53 to 93, perform the following code for that note,
  // incrementing note by 1 each time.
  for (int note = 53; note <= 93; note ++) {
    MIDI.sendNoteOn(note, velocity, channel);  // Turn the note on.
    delay(500);                               
    MIDI.sendNoteOff(note, velocity, channel); // Turn the note off.
    delay(500);
  }
}
