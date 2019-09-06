arduino-cli board list
arduino-cli compile --fqbn arduino:avr:uno ./
arduino-cli upload -p /dev/cu.usbmodem14301 --fqbn arduino:avr:uno ./
