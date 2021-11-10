## Arduino Sketches

## Setting up

Install [`arduino-cli`](https://github.com/arduino/arduino-cli).
Then Updating `sketchbook_path` is recommended.

```
$ brew install arduino-cli
$ arduino-cli config init # Make config file at ~/.arduino15
$ arduino-cli board list # Check port, fqbn, and core
$ arduino-cli core install arduino:avr # `arduino:avr` is a sample

$ sudo chmod a+rw /dev/ttyACM0

$ arduino-cli compile --fqbn arduino:avr:uno LEDBlinker
$ arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:avr:uno LEDBlinker

$ screen /dev/ttyACM0 9600 # ctrl+a > k
```

## References

- [Arduino CLI](https://arduino.github.io/arduino-cli/0.19/)
- [C++ / Arduino CLI / NeoVim でArduinoで遊ぶ環境を整える | DevelopersIO](https://dev.classmethod.jp/articles/cpp-arduino-cli-neovim-play/)
