#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,j;

    scanf("%d" , &n);

    if(n>0 && n<101){
    	char inp[n][n];
    	j=0;
    	for(i=0;i<n;i++){
    		scanf("%s" , &inp[i]);
    	}

    	for(i=0;i<n;i++)  
		   {  
		     for(j=0;j<n;j++)  
		     {  
		       if(i == 0 || j == 0 || i == n-1 || j == n-1 )  
		       {  
		         printf("%c",inp[i][j]);  
		       }  
		       else if(inp[i][j] > inp[i][j-1] && inp[i][j] > inp[i][j+1] && inp[i][j] >inp[i-1][j] && inp[i][j] > inp[i+1][j])  
		       {  
		         printf("X");    
		       }  
		       else  
		       {  
		         printf("%c",inp[i][j]);  
		       }  
		     }  
		     printf("\n");  
		   }

    }

    return 0;
}
