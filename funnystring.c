#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {

	int t,len,i,j;
	char str[LINE_MAX];
	scanf("%d", &t);
	if(t<=10){
		while(t--){
			fflush(stdin);
			fgets(str , LINE_MAX, stdin);
			//printf("%s\n", str);

			if(strlen(str) <= 10000 && strlen(str)>1){

				len = strlen(str);
				printf("%d\n", len);
				for (i = 0,j=len-2; i < len-1,j>=0; i++,j--)
				{
					if(abs(str[i+1]-str[i])!=abs(str[j-1]-str[j])){
						printf("not same");
					}
				}
				if(i==len-2){
					printf("Funny\n");
				}else{
					printf("Not Funny\n");
				}

			}

		}
	}

    return 0;
}
