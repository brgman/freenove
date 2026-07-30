```
mkdir -p ~/bin
curl -fsSL https://raw.githubusercontent.com/arduino/arduino-cli/master/install.sh | BINDIR=~/bin sh
```

## Add in `~/.bashrc` or `~/.zshrc`
```
export PATH="$HOME/bin:$PATH"
```

## In the new terminal

```
source ~/.bashrc
arduino-cli version
```

# Initailisation 

```
arduino-cli config init
arduino-cli core update-index
arduino-cli core install arduino:avr
```

# Work-flow

```
# Create the skatch
arduino-cli sketch new Blink

# Compilation
arduino-cli compile --fqbn arduino:avr:uno Blink

# Watch the ports
arduino-cli board list

# Upload in the board
arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:avr:uno Blink

# Monitor
arduino-cli monitor -p /dev/ttyACM0 -c baudrate=9600
``` 

# Settings VSCode

```
➜  arduino git:(master) find ~ -type f -name "Arduino.h" 2>/dev/null 
```


Result: /home/abergman/.arduino15/packages/arduino/hardware/avr/1.8.8/cores/arduino/Arduino.h

https://docs.freenove.com/projects/fnk0059/en/latest/fnk0059/codes/C/First_Use.html

