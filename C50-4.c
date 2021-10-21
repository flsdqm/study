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
	//如果在大括号内定义了变量，出大括号变量被赋的值就没了，如果在大括号外定义的变量，大括号内对变量赋值的影响会继续保留。 
	printf("%d",d);
	return 0;
 } 
