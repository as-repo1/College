# !/bin/bash

function sum()
{ 
g=$Num
s=0

while [ $Num -gt 0 ]
do
	k=$(( $Num % 10 ))

	Num=$(( $Num / 10 ))

	s=$(( $s + $k ))
done
echo "sum of digits of $g is : $s"
}
echo enter the number to find the sum of the digits
read Num
sum
