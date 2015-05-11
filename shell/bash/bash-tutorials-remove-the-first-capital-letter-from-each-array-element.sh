count=0
country=0
while [ -n "$country" ]; do
	read country
	c[$count]=`echo ${country:0:1} | tr  '[A-Z]' '.'`${country:1}
	count=`expr $count + 1`
done
echo ${c[@]}
