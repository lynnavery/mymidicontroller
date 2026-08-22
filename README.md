# mymidicontroller
Simple 9 knob 10 key midi controller design using teensy and no mux/adc expanders

## Mockup

## BOM
| Qty | Part |
|---|---|
| 1 | Teensy 4.1 with headers |
| 2 | Custom PCB
| 1 | Jumper wires Female/Male 300mm pack of 40 |
| 1 | Strip of standard headers (2.54mm) for 22 total
| 1 | USB A to Micro-B cable |
| 9 | 10K linear pot PTV09A-4020U-B103 |
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


## References
- https://www.pjrc.com/teensy/td_midi.html
- Library for teensy midi controllers https://github.com/joshnishikawa/MIDIcontroller
- another midi library for teensy https://tomashg.com/?p=854
- another midi library https://tttapa.github.io/Control-Surface/Doxygen/index.html

