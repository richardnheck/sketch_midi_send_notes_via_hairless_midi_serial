# Arduino UNO sketch: Send midi notes via USB
Send basic midi notes via the USB. In order to send midi to a DAW, it requires using Hairless Midi Serial and LoopBe.

### Disclaimer
Basically using the code from this page https://bvavra.github.io/MIDI_Accordion/sending-midi/

## Circuit
Just an Arduino Uno or Uno compatible board

![image](https://github.com/richardnheck/sketch_midi_send_notes_via_hairless_midi_serial/assets/33075140/e35c71f6-4ba6-4213-9b98-ecaec91c5139)


## Dependencies
- [Arduino IDE](https://www.arduino.cc/en/software)
- [Midi Library](https://www.arduino.cc/reference/en/libraries/midi-library/) which can be installed easily via the Library Manager in Arduino IDE

## Demo
In the screenshot you can see the Midi Hairless Bridge logging the midi note on and off messages.  The midi is mapped to LoopBe internal midi which will appear as an input midi device in a DAW (in this case FL Studio).
Note that the last midi note logged is 78 with a velocity of 127.  This maps to F# as you can see in the top left panel in FL Studio.

![image](https://github.com/richardnheck/sketch_midi_send_notes_via_hairless_midi_serial/assets/33075140/1b00fbbe-87a5-47ec-aaa2-443b53aae1f5)

### LoopBe Internal midi
After installing LoopBe, LoopBe Internal Midi should automatically appear as a midi device in your DAW's midi settings
![image](https://github.com/richardnheck/sketch_midi_send_ctrl_change_from_potentiometer/assets/33075140/0f43c784-fd6d-4398-ba6c-57757911da9a)

## References
### Arduino and USB Midi
This is a great page explaining all things related to Arduino and USB midi. In particular, refer to the section "Serial MIDI over USB". 

https://diyelectromusic.wordpress.com/2022/03/22/arduino-and-usb-midi/

### Hairless Midi Serial Bridge
Hairless MIDI<->Serial Bridge is the easiest way to connect serial devices (like Arduinos) to send and receive MIDI signals. 100% Free Software. For Mac OS X, Windows & Linux.

https://projectgus.github.io/hairless-midiserial/

Make sure the baud rate is set to 115200, which is the baud rate defined in the code.

### Loop Be 1 - A Free Virtual MIDI Driver

LoopBe1 is an internal MIDI device for transferring MIDI data between computer programs. Basically LoopBe1 is an "invisible cable" to connect a MIDI outport of an application to any other application´s MIDI inport.

https://www.nerds.de/en/loopbe1.html

