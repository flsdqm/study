#include<stdio.h>
int main()
{
	int a,b,c,utc,e,f;
	scanf("%d",&a);
	b=a/2360;
	c=a/1000;
	if(b>0)
	{
		return 0;
	}
	if(c>0)
	{
		utc=a-800;
	}
	else if(c==0)
	{
		int d;
		d=a/800;
		if(d>0)
		{
			utc=a-800;
		}
		else
		{
			e=a%100;
		    f=(a-e)/100;
			if(e==0)
			{
				utc=(24+f-8)*100;
			}
			else
			{
				utc=(24+f-8)*100+e;
			}
		}
	}
	printf("%d",utc);
	return 0;
 } 
