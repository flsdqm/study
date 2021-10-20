#include<stdio.h>
int main(void)
{
	int i,j,n;
	for(i=3;i>0;i--)
	{
		for(j=1;j<=(5-(i*2-1))/2;j++)
		putchar(' ');
		for(n=1;n<=(i*2-1);n++)
		putchar('*');
		putchar('\n');
	}
	for(i=1;i<3;i++)
	{
		for(j=1;j<=(5-((i+1)*2-1))/2;j++)
		putchar(' ');
		for(n=1;n<=(i+1)*2-1;n++)
		putchar('*');
		putchar('\n');
	}
	return 0;
}
