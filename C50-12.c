#include<stdio.h>
int main()
{
	int n,i=0;
	scanf("%d",&n);
	if(n<=0||n>1000)
		return 0;
	while(n!=1)
	{
		if(n%2==0)
		{
			n=n/2;
		}
		else
		{
			n=(3*n+1)/2;
		}
		i++;
	}
	printf("%d",i);
	return 0;
}
