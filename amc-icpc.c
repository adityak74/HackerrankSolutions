#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int n,m,i,j,maxtopics,maxteams,k;

	scanf("%d %d",&n,&m);
	int tpm[500] = {0};
	
	if(n>1 && n<=500 && m>0 && m<=500){
		char inp[n][m];

		for(j=0;j<n;j++){
			scanf("%s",&inp[j]);
		}

		for(i=0;i<n;i++){
			
			for(j=i+1;j<n;j++){
				maxtopics = 0;
				for(k=0;k<m;k++){
					maxtopics += (inp[i][k]-48) || (inp[j][k]-48);
				}
				//printf("%d\n", maxtopics);
				tpm[maxtopics-1]++;
			}
		}

		

		for(k=m-1;k>=0;k--){
			if(tpm[k]!=0){
				printf("%d\n%d", k+1,tpm[k]);
				break;
			}
		}

	}
    

    return 0;
}
