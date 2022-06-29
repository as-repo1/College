echo enter three numbers to find the second higest among those
read a b c
if [ $a -gt $b ]
then
   if [ $b -gt $c ]
    then
        #if [ $b -gt $c ]
        #then
            echo $b is second highest
    else
            echo $c is second highest
  fi
elif [ $b -gt $c ]
then
   if [ $a -gt $c ]
  then
  echo $a is the second highest
  else
  echo $c is the second highest
  fi
elif [ $a -gt $c ]
  then
   if [ $c -gt $b ]
   then
   echo $c is second highest
   else
       echo $b is second highest
   fi
else
    echo $b is second highest
fi



