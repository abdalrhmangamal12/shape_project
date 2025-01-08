#!/bin/bash

### build
if [[ $1 == "build" ]]
then
g++ -S src/circle.cpp src/rectangle.cpp src/main.cpp 
g++ *.s -o program
fi
### to run
if [[ $1 == "run" ]]
 then 
./program
fi
if [[ $1 == "clean" ]]
then
rm -rf program
fi
