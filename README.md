# UFO
Arduino controlled UFO light display

This is a small project to create a LED light display around the edge of a hand-built
UFO, constructed for a school display.


Pins 5 and 6 on the ATTiny85 are a single channel charlie-plex, HIGH+LOW turns on one half
of the LEDs, and LOW+HIGH turns on the other half. There are 8 LEDs in each half, thus
16 LEDs evenly spaced around the edge of the UFO.


A hand-constructed H-bridge made with BC547/BC557 transistors is used to drive the chain,
which has 16 high-brite white LEDs connected (desoldered from a torch).


The ATTiny85 is programmed from a Arduino UNO running with the 'Arduino as ISP' program,
and the ATTiny85 arduino libraries are loaded into the Arduino IDE. Note also that
the fuses are programmed to use the internal RC clock set at 8MHz, and an avrdude
script is used to program these fuses.

David Whale

2nd Jan, 2016


