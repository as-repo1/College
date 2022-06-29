echo "enter two number to calculate" 
    read a b
        s=`expr $a + $b`
        m=`expr $a \* $b`

    echo "the sum is $s"
    echo "the mul is $m"
