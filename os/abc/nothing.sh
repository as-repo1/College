#!/bin/bash

echo enter your number
read n
factorial=1
 
counter=$n
 
while [[ $counter -gt 0 ]]; do
   factorial=$(( $factorial * $counter ))
   counter=$(( $counter - 1 ))
done
 
echo $factorial 
