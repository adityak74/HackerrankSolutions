read t1
read t2
read t3
if [ $t1 -lt 1000 ] && [ $t2 -lt 1000 ] && [ $t3 -lt 1000 ]
then
    if [ $t1 -eq $t2 ] && [ $t2 -eq $t3 ] && [ $t3 -eq $t1 ]
    then
        echo "EQUILATERAL"
    elif [ $t1 -eq $t2 ] || [ $t2 -eq $t3 ] || [ $t3 -eq $t1 ]
    then
        echo "ISOSCELES"
    else
        echo "SCALENE"
    fi
fi