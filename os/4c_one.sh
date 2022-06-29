#*
#* *
#* * *

echo enter the number of the rows to create a tree pattern
read a
for ((i=1;i<=a;i++))
do 
    for((j=1;j<=i;j++))
    do
        echo -n "*"
    done
     echo 
 done

