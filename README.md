# Home Automation - Arduino(Slave)

Arduino code, acts as a slave. Only responsible for acquire data from the real world and pass it to the master device.

[Project issue tracker board](https://trello.com/b/acWDFLf5/home-automation-and-spying-on-my-plant)

# Running (Through Linux terminal, Raspbian in my case):

Compile the sketch with [`arduino-cli`](https://github.com/arduino/arduino-cli):

`./arduino-cli compile --fqbn arduino:avr:mega:cpu=atmega2560 /home/pi/Arduino/arduinoSlave`
 
 Upload the sketch:
 
 `./arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:avr:mega:cpu=atmega2560 /home/pi/Arduino/arduinoSlave`
 
  -`arduino:avr:mega:cpu=atmega2560` change this to corresponding device
  
  -If it complains about not finding the path to the sketch, it should be enough to create one manualy.
