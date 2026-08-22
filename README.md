# mymidicontroller
I'm trying to learn c, teensy, electronics and CAD all at the same time
This is my first midi controller journey

## Concept
I want to create a midi controller using teensy, simple wiring (no resistors or fancy circuitry), and write a generic driver for it in C. It will have 9 knobs, 9 keys + 1 function key and a lil screen. Its gonna help me learn a few things
- soldering
- writing in C!
- teensy/arduino libraries
- CAD for designing enclosure
- 3d printing
- product design

The controller will send midi messages, and the screen will provide visual feedback. LEDs under keys could also provide feedback.
There can be multiple modes which can be switched via a function key.

## Mockup
<img width="1500" height="1200" alt="Untitled(3)" src="https://github.com/user-attachments/assets/ed5a3324-e527-49c4-b853-52cdd0c6a748" />

it aint pretty but maybe it'll work

## BOM
| Qty | Part |
|---|---|
| 1 | Teensy 4.1 with headers |
| 1 | 830-point solderless breadboard |
| 2 | Jumper wires Male/Male pack of 65 |
| 1 | Jumper wires Female/Male 300mm pack of 40 |
| 1 | Hookup wire 22AWG solid assorted colors |
| 1 | USB A to Micro-B cable |
| 9 | Alpha 10K linear pot round shaft PCB 9mm |
| 9 | Black Moog knob 16x21mm shaft 6.4mm |
| 10 | Cherry MX/knockoff switch (any color) |
| 10 | Keycaps |
| 1 | 0.96in OLED I2C 4-pin white character display |
| 1 | Enclosure and front panel (3d printed) |

If I decide to do an expander for the extra teensy io
| Qty | Part |
|---|---|
| 1 | Panel-mount D-sub or aviation connector |
| 6 | Series resistors 220ohm-1k for expander lines |

## Circuit diagram

<img width="3508" height="2480" alt="image" src="https://github.com/user-attachments/assets/2f31aaa1-2ce4-4e5b-a853-cdcd6f37916f" />


## Things to add
- LEDs for the keys (I bought switches with room for LEDs)
- - these keycaps erica sells are cool and could light up https://www.ericasynths.lv/black-key-set-381/
- Expander I/O of some sort, for future arduino fuckery
- - Could be either like some funny bus i/o expander connector, or a bunch of cv 3/8th cable ins.
- Maybe a usb mini to usb C mounted on the body
- an on/off switch or internal power? If its being connected by usb though theres no real use

## References
- https://www.pjrc.com/teensy/td_midi.html
- Library for teensy midi controllers https://github.com/joshnishikawa/MIDIcontroller
- another midi library for teensy https://tomashg.com/?p=854
- another midi library https://tttapa.github.io/Control-Surface/Doxygen/index.html

## Inspo
- This macro keypad midi controller https://youtu.be/rUteUrWNM18?is=rv8fy3RFLP0ODB8-
- this midi controller w screen https://youtu.be/xiZ_aWyoJGo?is=eepwr4AVEBQu5Y3n
- The erica drum sequencer https://www.ericasynths.lv/drum-sequencer-85/
