#include<stdio.h>
int main()
{
	int a,b,d,x;
	
	x=100;
	for(a=0;a<=x/5;a++)
	{
		for(b=0;b<=x/3;b++)
		{
			for(d=0;d<=x;d++)
			{
				
				if(5*a+3*b+d==100&&a+b+3*d==100)
				{
					printf("Ä¸¼¦£º%d¹«¼¦£º%dÐ¡¼¦£º%d\n",a,b,3*d);
				}
			}
		}
	}
	return 0;
 } 
