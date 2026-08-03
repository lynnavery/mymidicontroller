# mymidicontroller
I'm trying to learn c, teensy, electronics and CAD all at the same time

## Concept
I want to create a midi controller using teensy, simple wiring (no resistors or fancy circuitry), and write a generic driver for it in C. It will have 9 knobs, 9 keys( like clicky keyboard keys) and a lil screen (something i've always wanted to do). Its gonna help me learn a few things
- soldering better
- using i/o with a teensy / arduino
- design enclosure with CAD
- get my friend to help me 3D print it
- writing in C!

## Mockup
<img width="2000" height="1500" alt="Untitled(2)" src="https://github.com/user-attachments/assets/3057becd-6a3e-4bd2-a323-659246aea12c" />


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
| 9+ | Cherry MX/knockoff switch (any color) |
| 9+ | Keycaps |
| 1 | 0.96in OLED I2C 4-pin white character display |
| 1 | Panel-mount D-sub or aviation connector |
| 6 | Series resistors 220ohm-1k for expander lines |
| 1 | Enclosure and front panel (3d printed) |


## Circuit diagram

<img width="600" height="600" alt="Untitled(1)" src="https://github.com/user-attachments/assets/db65d853-6322-4694-85a2-67171a1c18d9" />

## Things to add
- LEDs for the keys (I bought switches with room for LEDs)
- - these keycaps erica sells are cool and could light up https://www.ericasynths.lv/black-key-set-381/
- Expander I/O of some sort, for future arduino fuckery
- - Could be either like some funny bus i/o expander connector, or a bunch of cv 3/8th cable ins.
- Maybe a usb mini to usb C mounted on the body
- an on/off switch or internal power? If its being connected by usb though theres no real use

## Usage
In theory I will use this for Max MSP or Ableton controlling. 
I picture the knobs being mapped and the keys controlling a sort of inner brain of midi pagination or hotkeys or something.

## Todo
- design enclosure
- write code

## References/inspo
- This macro keypad midi controller https://youtu.be/rUteUrWNM18?is=rv8fy3RFLP0ODB8-
- this midi controller w screen https://youtu.be/xiZ_aWyoJGo?is=eepwr4AVEBQu5Y3n