#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{

	char num1[18],num2[18];
	int i=0,j,k;
	do
	{
		printf("num1:");
		for(i=0;i<18;i++)
		{
			scanf("%s",&num1[i]);
			if(getchar()=='\n')
				break;
		}
		j=strlen(num1);
	}while(j>18);
	do
	{
		printf("num2:");
		for(i=0;i<18;i++)
		{
			scanf("%s",&num2[i]);
			if(getchar()=='\n')
				break;
		}
		k=strlen(num2);
	}while(k>18);
	printf("Êä³ö£º%lld",atoll(num1)+atoll(num2));
	return 0;
 } 
