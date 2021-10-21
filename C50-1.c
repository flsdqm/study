#include<stdio.h>
int main()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a+b>c&&b+c>a&&a+c>b)
	{
		if(a==b&&b==c)
		{
			printf("1");
		}
		else if(a==b||b==c||a==c)
		{
			printf("2");
		}
		else
		{
			printf("3");
		}
	}
	else
	{
		printf("0");
	} 
	return 0;
 } 
