#include<stdio.h>
int main()
{
	int n,m,i,j,a[100];
	while(~scanf("%d %d",&n,&m))
	{
		if(n<=0||n>100000||m<=0||m>10)
			break;
		if(m==0&&n==0)
			break;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=n-1;j>i;j--)
			{
				if(a[j-1]<a[j])
				{
					int t=a[j];
					a[j]=a[j-1];
					a[j-1]=t;
				}
			}
		}
		if(n>=m)
		{
				for(i=0;i<m;i++)
			{
				printf("%d ",a[i]);
			}
		}
		else
		{
			for(i=0;i<n;i++)
			{
				printf("%d ",a[i]);
			}
		}
		
	}
	return 0;
 } 
