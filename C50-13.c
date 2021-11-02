#include<stdio.h>
int main()
{
	int t,i,j;
	scanf("%d",&t);
	if(t>10||t<=0)
		return 0;
	long abc[10][3];
	for(i=0;i<t;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%ld",&abc[i][j]);
		}
	}
	for(i=0;i<t;i++)
	{
		if(abc[i][0]+abc[i][1]>abc[i][2])
			printf("Case #%d: true",i+1);
		else
			printf("Case #%d: false",i+1);
		if(i!=t-1)
			putchar('\n');
	}
	return 0;
}
