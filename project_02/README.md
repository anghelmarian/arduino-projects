![Working project](working-project.jpg)

Description = playing with digital signals for various pins, learning about output/input pins, setting pins HIGH/LOW

HIGH
: there is voltage when measuring the pin

LOW
: no voltage detected when measuring

Code snippets
```
// function to set a pin direction
// pinMode = OUTPUT/INPUT
pinMode(pinNumber, pinMode);

// function to read a INPUT pin
digitalRead(pinNumber);

// function to change the state of a OUTPUT pin
// pinState = HIGH/LOW
digitalWrite(pinNumber, pinState);

// add delay to the main loop (in ms)
delay(250);

```
