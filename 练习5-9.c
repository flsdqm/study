#include<stdio.h>
#define NUMBER 80
int max_of(const v[])
{
	int i;
	int max=v[0];
	for(i=1;i<11;i++)
	{
		if(v[i]>max)
		{
			max=v[i];
		}
	}
	return max;
}
int main()
{
	int i,j,k,x;
	int num,maximum;
	int fen[NUMBER];
	int fenbu[11]={0};
	printf("������ѧ��������");
	do
	{
		scanf("%d",&num);
		if(num<1||num>NUMBER)
			printf("\a������1~%d������",NUMBER);
	}while(num<1||num>NUMBER);
	printf("������%d�˵ķ�����\n",num);
	for(i=0;i<num;i++)
	{
		printf("%d�ţ�",i+1);
		do
		{
			scanf("%d",&fen[i]);
			if(fen[i]<0||fen[i]>100)
				printf("\a������1~100������");
		}while(fen[i]<0||fen[i]>100);
		fenbu[fen[i]/10]++;
	}
	puts("\n---�ֲ�ͼ---");
	maximum=max_of(fenbu);
	x=maximum;
	for(k=0;k<maximum;k++)
	{
		for(j=0;j<11;j++)
		{
			if(fenbu[j]!=x)
			{
				putchar(' ');
				putchar(' ');
				putchar(' ');
				putchar(' ');
			}
			else
			{
				putchar(' ');
				putchar(' ');
				putchar('*');
				putchar(' ');
			fenbu[j]--;
			}
		}
		putchar('\n');
		x--;
	}
	puts("--------------------------------------------");
	for(j=0;j<11;j++)
	{
		putchar(' ');
		if(j==0)
			putchar(' ');
		printf("%d",10*j);
		putchar(' ');
	}
	return 0;
 } 
