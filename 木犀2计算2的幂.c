#include<stdio.h>
void mi2(long x)
{
	int n=1;
	while(n<x)
	{
		n*=2;
		if(n==x)
			printf("2���ݣ�true\n");
		if(n>x)
			printf("2���ݣ�false\n"); 
	}
}
void mi4(long y)
{
	int n=1;
	while(n<y)
	{
		n*=4;
		if(n==y)
			printf("4���ݣ�true");
		if(n>y)
			printf("4���ݣ�false"); 
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
