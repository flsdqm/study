#include<stdio.h>
int main()
{
	int a,b,n=0,p=0,q;
	scanf("%d",&a);
	
	while(a!=-1)
	{
		if(a<=0||a>=100000)
	    {
		    return 0;
	    }
		n++;
		b=a%2;
		if(b==1)
		{
			p++;
		}
		scanf("%d",&a);
	}
	q=n-p;
	printf("%d %d",p,q);
	return 0;
}
