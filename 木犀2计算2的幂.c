#include<stdio.h>
void mi2(long x)
{
	int n=1;
	while(n<x)
	{
		n*=2;
		if(n==x)
			printf("2的幂：true\n");
		if(n>x)
			printf("2的幂：false\n"); 
	}
}
void mi4(long y)
{
	int n=1;
	while(n<y)
	{
		n*=4;
		if(n==y)
			printf("4的幂：true");
		if(n>y)
			printf("4的幂：false"); 
	}
}
int main()
{
	long a;
	printf("num:");
	scanf("%ld",&a);
	mi2(a);
	mi4(a);
	return 0;
}
