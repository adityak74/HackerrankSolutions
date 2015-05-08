#include <stdio.h>
#include <string.h>
#include <math.h>
int status[101] = {0};

int main() {

    int res;
    int size, i=0;
    int a[100];
    int item;
    scanf("%d", &size);

    if(size < 100 && size > 0 && !(size%2==0)){
        
        while(i<size) { 
            
            scanf("%d", &item);
            if(item>=0 && item <=100){
                a[i] = item;
                i++;
            }

        }

        int j;

                for (j = 0; j < size; j++)
                {
                    status[ a[j] ]++;
                }
                for (j = 0; j < 101; j++)
                {
                    if(status[j]==1){ res = j; }
                }

                printf("%d", res);
        
        
    }
    
    
    return 0;
}
