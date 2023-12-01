# Arduino UNO sketch: Send midi notes via USB
Send basic midi notes via the USB. In order to send midi to a DAW, it requires using Hairless Midi Serial and LoopBe.

Run the code in Arduino IDE
Depends on the Midi Library which can be installed easily via the Library Manager https://www.arduino.cc/reference/en/libraries/midi-library/

Basically using the code from this page https://bvavra.github.io/MIDI_Accordion/sending-midi/

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

