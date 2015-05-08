#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,divcount,i,k;
    long int n;
    char buffer[11];
    
    scanf("%d",&t);
    if(t>0 && t<16){
        for(k=0;k<t;k++){
            scanf("%ld",&n);
            snprintf(buffer, 11, "%ld", n);
            divcount=0;
            for(i=0;i<11;i++){
                if((buffer[i]-48)>0){
                    if(n%(buffer[i]-48)==0){

                        divcount++;
                    }
                }
            }
            printf("%d\n",divcount);
            memset(buffer,0,11);
        }
    }
    
    return 0;
}
