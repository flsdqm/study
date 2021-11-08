#include<stdio.h>
void hw(int x)
{
	if(x<0)
		printf("false");
	else
	{
		int i=0,a[100],n=1,m;
		while(x>=10)
		{
			a[i]=x%10;
			x=x/10;
			n++;
			i++;
		}
		a[i]=x;
		for(i=0;i<n/2;i++)
		{
			if(a[i]!=a[n-i-1])
			{
				printf("false");
				break;
			}
			m=0;
		}
		if(m==0)
			printf("true");
		
	}
}
int main()
{
	int x;
	printf("ÊäÈë£ºx=");
	scanf("%d",&x);
	hw(x);
	return 0;
}
