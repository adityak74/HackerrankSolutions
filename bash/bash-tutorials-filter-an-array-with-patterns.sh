count=0
country=0
while [ -n "$country" ]; do
	read country
	c[$count]=$country
	count=`expr $count + 1`
done
declare -a patter=( ${c[@]/*a*/} )
declare -a patter2=( ${patter[@]/*A*/} )
echo ${patter2[@]}
