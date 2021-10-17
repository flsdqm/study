#include<stdio.h>
int main()
{
	int i,a,b,c=0;
	for(i=2;i<101;i++)
	{
		b=1;//i=2时，b=1无法进入内部循环，故能输出2 
		for(a=2;a<i;a++)
		{
			
			if(i%a==0)
			{
				b=0;
				break;
			}
		}
		if(b==1)
		{
			printf("%d ",i);
			c++;
		}
		if(c%5==0)
		{
			printf("\n");
		}
	}
	return 0;
}
