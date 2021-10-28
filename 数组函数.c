#include<stdio.h>
void a(int v1[],const int v2[],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		v1[i]=v2[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(v1[j-1]>v1[j])
			{
				t=v1[j];
				v1[j]=v1[j-1];
				v1[j-1]=t;
			}
		}
	}
}
int main()
{
	int b[5],c[5],i;
	for(i=0;i<5;i++)
	{
		b[i]=0;
		scanf("%d",&c[i]);
	}
	a(b,c,5);
	for(i=0;i<5;i++)
	printf("%d ",b[i]);
	
 } 
