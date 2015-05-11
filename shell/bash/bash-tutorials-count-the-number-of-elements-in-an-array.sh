count=0
country=0
while [ -n "$country" ]; do
	read country
	c[$count]=$country
	count=`expr $count + 1`
done
echo $((${#c[@]}-1))