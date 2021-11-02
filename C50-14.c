#include<stdio.h>
void min(int a[],int n)
{
	int i,b,c;
	b=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<b)
		{
			b=a[i];
			c=i;
		}
	}
	a[c]=a[0];
	a[0]=b;
}
int main()
{
	int n,i,a[99];
	while(scanf("%d",&n)!=EOF)
	{
		if(n>=100||n==0)
			break;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		min(a,n);
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}
