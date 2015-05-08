#include <stdio.h>
#include <string.h>
#include <math.h>

int lonelyinteger(int size, int* a) {
    
}
int main() {

    int res;
    int size, i=0;
    int item;
    scanf("%d", &size);

    if(size < 100 && size >=1 && (size%2==0)){
        int a[size];
        while(i<size) { 
            
            scanf("%d", &item);
            if(item>=0 && item <=100){
                a[i] = item;
                i++;
                res = lonelyinteger(size, a);
                printf("%d", res);
            }
            else{

            }

        }
        
        
    }
    
    
    return 0;
}
