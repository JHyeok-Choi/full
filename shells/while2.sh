#!/bin/bash

a=1

while [ $a != "0" ]; do
	echo -n "input : "
	read a
	if [ $a == "0" ]; then
		break;	
	elif [ $a -lt 2 -o $a -gt 9 ]; then
		echo "$a is not in 2 ~ 9"
	else
		for ((k=1;k<=9;k++))do
			echo "$a * $k = `expr $a \* $k `"
		done			
	fi
done
echo Exit

