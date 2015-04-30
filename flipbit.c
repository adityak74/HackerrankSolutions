#include <stdint.h>
#include <stdio.h>
int32_t my_32bit_int;

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	scanf("%d",&my_32bit_int);
	printf("%u\n", ~my_32bit_int);
	}
	return 0;
}