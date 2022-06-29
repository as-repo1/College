echo "enter two numbers"
    read a b
    if [ $a -gt $b ]
        then 
            echo "first is bigger"
    elif [ $a -lt $b ]
        then
            echo "second is bigger"
    else
        echo "both are equal"
    fi

