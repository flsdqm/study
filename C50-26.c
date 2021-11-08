#include <stdio.h>
int main()
{
	int a,b,s;
	while(~scanf("%d %d",&a,&b))
	{
		s=a*b;
		while(a&&b)
		{
			if(a>b)
				a%=b;
			else 
				b%=a;
		}//注意这里要多次循环 
		printf("%d\n",s/(a+b));
	}
	return 0; 
}

