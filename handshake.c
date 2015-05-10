#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    
	int t;
	long n;

	scanf("%d", &t);

	if(t>0 && t<=1000){
		while(t--){
			scanf("%ld", &n);
			printf("%ld\n" , ((n-1)*n)/2 );
		}

	}
    return 0;
}
