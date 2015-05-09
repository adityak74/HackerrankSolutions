#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, n, c, m, wrappers;
    scanf("%d", &t);

    if(t>=1 && t<=1000)
    {
        while ( t-- )
        {
            scanf("%d %d %d",&n,&c,&m);

            if(n>1 && n<=100000 && c>0 && c<=n && m>1 && m<=n){
                int answer = 0; 
                wrappers = n/c;
                answer = wrappers;

                while(wrappers>=m){
                    wrappers = wrappers - m;
                    answer++;
                    wrappers++;
                }

                printf("%d\n",answer);
            }
        }
    }
    return 0;
}
