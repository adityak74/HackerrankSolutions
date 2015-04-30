#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,ip,res=1;
    scanf("%d",&t);
    if(t>0){
        for(int i=0;i<t;i++){
            scanf("%d",&ip);
            for(int j=0;j<ip;j++){
                if(j%2==0)
                    res = res * 2;
                else
                    res = res + 1;
            }
            printf("%d\n",res);
            res = 1;
        }
    }
    
    return 0;
}
