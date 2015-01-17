#!/usr/bin/sh

Prog=$1
Times=$2

for ((I=0; I < $Times; I++)) ; do
	./$Prog > /dev/null
done
