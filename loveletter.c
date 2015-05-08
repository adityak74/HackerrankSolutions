#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,len,i,ops,j,totops,diff;
    char str[10000];

    scanf("%d", &t);

    if(t>0){
    	
    while(t>0){
    	ops = 0;
    	totops = 0;
    	scanf("%s" , &str);

    	len = strlen(str);
    	j = len-1;
    	for(i=0; i< (len/2); i++){
    		diff = abs(str[i] - str[j]);
    		totops += diff;
    		j--;
    	}
    	printf("%d\n", totops);
    	t--;
    } 

	}
    return 0;
}
