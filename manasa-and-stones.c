#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    int n,a,b,i,j,final=0,v1,v2;

    scanf("%d" , &t);

    while(t--){

    	scanf("%d" , &n);
    	scanf("%d" , &v1);
    	scanf("%d" , &v2);
    	if(n>0 && n<1000 && v1>0 && v1<=1000 && v2>0 && v2<=1000){

    		if(v1==v2){
    			printf("%d\n", (n-1)*v1);
    		}
    		else{
    			if(v1 < v2)
			{ 
				a = v2;
			    b = v1;
			}
			else
			{
				a = v1;
				b = v2;
			}
			for(i=0;i<n;i++)
			printf("%d ",a*i+b*(n-1-i));
			printf("\n");
    		}

    		

    	}
    	
    }
    return 0;
    
}
