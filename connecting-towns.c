#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    long long n,tot,dist;

    scanf("%d", &t);

    if(t>0 && t<=1000){

    	while(t--){
    		scanf("%lld" , &n);
    		tot = 1;
    		dist = 0;
    		if(n>1 && n<=100){
    			while(--n){
    				scanf("%lld", &dist);
    				tot = (tot * dist) % 1234567;
    			}


    		}
    		printf("%lld\n", tot);
    	}

    }


    return 0;
}
