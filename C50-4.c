#include<stdio.h>
int main()
{
	int a,b,c,d,x;
	scanf("%d %d",&a,&b);
	c=a<b?a:b;
	d=a<b?b:a;
	do
	{
		x=d%c;
		d=c;
		c=x;
	}while(c!=0);
	printf("%d",d);
	return 0;
 } 
