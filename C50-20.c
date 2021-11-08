#include<stdio.h>
int main()
{
	int m,i,j,a[1000];
	float sum=0,x;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
		sum=0;
		for(j=0;j<a[i];j++)
			{
				x=1.00/(j+1);
				if(j%2!=0)
					x=-x;
				sum=sum+x;
			}
		printf("%.2f\n",sum);
	}
	return 0;
}
