#!/bin/sh
i=0
while :
do
./vulp < /home/seed/race_condition/input.txt
let i=$i+1
done
