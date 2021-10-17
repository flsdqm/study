#include<stdio.h>
int main()
{
	int a,count=0,i,m;
	scanf("%d",&a); 
	if(a==0)
	{
		printf("0");
	}
	if(a<0||a>1000000)
	{
		return 0;
	}
	while(a!=0)
	{
		a=a/10;
		count++;
	}
	for(i=1;i<=count;i++)
	{
		m=a%(count-i);
		if(i==)
	}
	return 0;
}
