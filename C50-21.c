#include<stdio.h>
int f(int n)
{
	if(n==1)
		return 0;
	else if(n==2)
		return 2;
	else if(n==3)
		return 2;
	else
		return (2*f(n-2)+f(n-1))%10000;
}
    
int main()
{	
	int n,a[100],i=0,b;
	while(~scanf("%d",&n))
	{
		if(n==0)
			break;
		a[i]=n;
		i++;
	}
	b=i;
	for(i=0;i<b;i++)
	{
		printf("%d\n",f(a[i]));
	}
	return 0;
}
