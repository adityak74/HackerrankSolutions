#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int min(int n , int *a){
	int temp,i;

	for(i=0;i<n;i++){
		if(a[i]!=0){
			temp = a[i];
			break;
		}
	}
	
	for(i=0 ; i<n ; i++){
		if(temp > a[i] && a[i]!=0){
			temp = a[i];
		}
	}
	return temp;
}

int sum(int *a,int n){
	int k,sum=0;
	for(k=0;k<n;k++){
		sum += a[k];
	}
	return sum;
}

int main() {

	int n, lengths[1000],i=0, sticklen, stickscut, k;
	scanf("%d" , &n);

	if(n > 0 && n < 1001)
	{
		while(i<n){
		scanf("%d" , &sticklen);
			if(sticklen > 0 && sticklen < 1001){
				lengths[i] = sticklen;
				i++;
			}
		}

		while(sum(lengths,n)!=0){
			stickscut = 0;
			int tocut = min(n , lengths);
			for(k=0; k<n; k++){
				if(lengths[k]!=0){
					lengths[k] -= tocut;
					stickscut++;
				}
			}
			printf("%d\n", stickscut);
		}

		


	}
    
    return 0;
}