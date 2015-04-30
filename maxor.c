#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
    int res = 0,temp;
    if(l<r && l<1000 && r<1000){
    	for(int i=l;i<r;i++){
    		for(int j=i;j<r;j++){
    			temp = i ^ j;
    			if(temp>res)
    				res = temp;
    		}
    	}
    	return res;
    }else{
        return 0;
    }
}
int main() {
    int res;
    int _l;
    scanf("%d", &_l);
    
    int _r;
    scanf("%d", &_r);
    
    res = maxXor(_l, _r);
    printf("%d", res);
    
    return 0;
}
