echo "enter two numbers"
read a b
 if [ `expr $a % 2` -eq 0 ]
  then
    echo "first one is even"
 else
     echo "first one is odd"
 fi
 if [ `expr $b % 2` -eq 0 ]
 then
     echo "second one is even"
 else
     echo "second one is odd"
 fi
