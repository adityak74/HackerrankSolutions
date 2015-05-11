sum=0
read n
count=0
if [ $n -lt 501 ]
then
while [ $count -lt $n ]; do
    read num
    if [ $num -lt 10001 ] && [ $num -gt -10001 ]
    then
    sum=`expr $sum + $num`
    count=`expr $count + 1`
	fi
done
echo $(printf %.3f $(echo "$sum/$n" | bc -l))
fi