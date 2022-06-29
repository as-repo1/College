clear
echo "Menu "
echo "1. Copy a File "
echo "2. Remove a file "
echo "3. Move a file"
echo "4. Rename"
echo "5. Exit"
x="y"
while [ $x == "y" -o $x == "Y" ]
do
echo "Enter ur Choice \c"
read ch
case $ch in
    1) echo enter source file and target location
        read a b
        cp $a $b ;;
    2) echo enter the file to remove
        read a
        rm $a ;;
    3) echo enter the source file to move and target location
        read a b
        mv $a $b ;;
    4) echo enter the file to be rename and its new name 
        read a b
        mv $a $b ;;
    5) echo ok bye!
        exit ;;
    *) echo wrong input 
esac
echo do you want to continue ? press y/Y
read x
done
