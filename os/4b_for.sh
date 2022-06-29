#!/bin/bash
 
echo Enter Number
 
read num
 
factorial=1

for ((i=1;i<=num;i++))
do
    factorial=$(($factorial*$i))
done
 
echo Factorial of $num is $factorial
