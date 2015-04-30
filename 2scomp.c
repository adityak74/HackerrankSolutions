#include <stdint.h>
#include <stdio.h>
int32_t left,right;

int main(int argc, char const *argv[])
{
	int t,count=0;
	scanf("%d",&t);
	if(t <= 1000)
	{
		for(int i=0;i<t;i++)
		{
		scanf("%d %d",&left,&right);
		printf("%x %x\n", left,right);


		printf("%d" , left << 1);
		}
	}
	
	return 0;
}