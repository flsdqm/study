#include<stdio.h>
int main()
{
	int i=0,k=0,a[100],n;
	scanf("%d",&n);
	while(scanf("%d",&a[i])!=EOF)
		{
			i++;
			if(i==n)
				break;
		}
	for(k=0;k<i;k++)
		printf("%c",(char)a[k]);
	return 0;
 } 
