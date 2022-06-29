#!/bin/bash
   read a
INDEX=0
 
until [ $INDEX -ge $a ]
do
        echo $INDEX
    INDEX=$(($INDEX+1))
done 
