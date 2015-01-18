#!/usr/bin/sh

Prog1=$1
Prog2=$2
Times=$3

echo === Run program \"$Prog1\" for $Times times ===
time ./runner.sh $Prog1 $Times
echo
echo === Run program \"$Prog2\" for $Times times ===
time ./runner.sh $Prog2 $Times
