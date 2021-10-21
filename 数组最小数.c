#include<stdio.h>
int min_of(const v[],int n)
{
	int i;
	int min=v[0];
	for(i=1;i<n;i++)
	{
		if(v[i]<min)
		{
			min=v[i];
		}
	}
	return min;
}
int main()
{
	int i,b,minimum;
	scanf("%d",&b);
	int a[b];
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	minimum=min_of(a,b);
	printf("最小数为%d",minimum);
	return 0;
}
