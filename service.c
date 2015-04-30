#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int min(int *a,int ent,int ext){
    int lowest = 0;
    lowest = a[ent];
    for(int i=ent;i <= ext;i++){
    	if(lowest > a[i]){
    		lowest = a[i];
    	}
    }
    return lowest;
}

int minnum(int a, int b){
	if(a<b)
		return a;
	else
		return b;
}

int main() {

    int n,t,k=0,l=0,ent,ext,temp;
    scanf("%d %d",&n,&t);

    if( n>=2 && n<=100000 &&  t>=1 && t<=1000)
    {
       int a[n];

	   while(k<n){
	   		scanf("%d",&temp);
	   		if(temp>=1 && temp<=3){
	   			a[k] = temp;
	   			k++; 
	   		}
	   }

	   while(t){
	   scanf("%d %d",&ent,&ext);
	   if(ent < ext && ent>=0 && ext < n && (ext-ent+1)>=2 && (ext-ent+1)<=minnum(n,1000)){
	   printf("%d\n",min(a,ent,ext));
	   t--;
	   }
	   }
    }

    

    return 0;
}
