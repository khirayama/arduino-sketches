#!/bin/sh

source config.sh
project=$1
echo "fqbn $fqbn"
echo "port $port"
echo "project $project"
arduino-cli compile --fqbn $fqbn $project
arduino-cli upload -p $port --fqbn $fqbn $project
