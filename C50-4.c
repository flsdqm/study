#include<stdio.h>
int main()
{
	int a,b,c,d,x;
	scanf("%d %d",&a,&b);
	c=a<b?a:b;
	d=a<b?b:a;
	do
	{
		x=d%c;
		d=c;
		c=x;
	}while(c!=0);
	//����ڴ������ڶ����˱������������ű���������ֵ��û�ˣ�����ڴ������ⶨ��ı������������ڶԱ�����ֵ��Ӱ������������ 
	printf("%d",d);
	return 0;
 } 
