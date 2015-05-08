#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int t,n,k,i=0,tmp,ontime=0,testc;

	scanf("%d" , &t);

	if(t>0 && t<11){

		for(testc=0; testc<t; testc++){

			ontime = 0;
			scanf("%d %d", &n, &k);
			//For debug printf("Entered n:%d,k:%d\n", n, k);

			if(n>0 && n<1001 && k>0 && k<=n){

				int a[n];
				i=0;
				while(i<n){
					scanf("%d", &tmp);
					if(tmp<101 && tmp>-101){
						a[i] = tmp;
						i++;
					}	
				}

				for(i=0;i<n;i++){
					if(a[i]<=0)
						ontime++;
				}

				if(ontime<k){
					printf("YES\n");
					
				}
				else if(ontime>=k){
					printf("NO\n");
					
				}



			}

			
		}


	}
    
    return 0;
}
