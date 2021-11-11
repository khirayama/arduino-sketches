#!/bin/sh

# Change fqbn and port for your env
fqbn="arduino:avr:uno"
port="/dev/ttyACM0"

project=$1

echo "fqbn   : $fqbn"
echo "port   : $port"
echo "project: $project"
echo "start compiling"
arduino-cli compile --fqbn $fqbn $project
echo "success compiling"
echo "start uploading"
sudo chmod a+rw $port
arduino-cli upload -p $port --fqbn $fqbn $project
echo "success uploading"
