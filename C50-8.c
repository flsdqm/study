#include<stdio.h>
#include<math.h>
int main()
{
	double a[100],m,sum=0.00;
	int i,n,j,t;
	while(scanf("%d",&n)!=EOF)
	{
		if(n<=2&&n>100)
			break;
		for(i=0;i<n;i++)
		{
			scanf("%lf",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=n-1;j>i;j--)
			{
				if(a[j-1]>a[j])
				{
					int t=a[j];
					a[j]=a[j-1];
					a[j-1]=t;
				}
			}
		}
		for(i=1;i<n-1;i++)
		{
			sum+=a[i];
		}
		m=sum/(n-2);
		printf("%.2f\n",m);
	}
	return 0;
}
