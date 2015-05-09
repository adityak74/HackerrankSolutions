#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int eletosearch,size,tmp;
    
    scanf("%d", &eletosearch);
    scanf("%d", &size);
    if(size>0 && size<=1000){
        int arr[size];
        
        for(int i=0;i<size;i++){
            scanf("%d", &tmp);
            
            if(tmp > -1001 && tmp < 1001){
                arr[i] = tmp;
            }else{
                arr[i] = 0;
            }
            
        }
        
        for(int j=0;j<size;j++){
            if(eletosearch==arr[j]){
                printf("%d",j);
                break;
            }
        }
        
        
    }
    
    return 0;
}
