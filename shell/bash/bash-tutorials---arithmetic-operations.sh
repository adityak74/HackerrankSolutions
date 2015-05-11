read exp
echo $(env printf %.3f $(echo "$exp" | bc -l))