#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int t,i;
	long int noOfchoc,k;

	scanf("%d", &t);

	for (i = 0; i < t; ++i)
	{
		scanf("%ld", &k);
		if(k>1 && k<=10000000){
			noOfchoc = (k/2) * (k - (k/2));
			printf("%ld\n",noOfchoc);
		}
	}
    
    return 0;
}
