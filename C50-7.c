#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,a[100],x=1;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]%2==1)
			{
				x=x*a[i];
			}
		}
		printf("%d\n",x);
	}
	
	return 0;
 } 
