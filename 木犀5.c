#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main()
{
	printf("������Ϸ\n��Ϸ���򣺳�ʼ100Ԫ��������Ϸ������ÿ���Ȼ���ʾһ�����֣�Ȼ��µڶ��������Ƿ�ȵ�һ����֮��������룬����ʾ�ڶ�������\n�õ�100Ԫ��\n");
	int t,i,b,c,f;
	int e=100;
	srand((unsigned)time(NULL));
	printf("��������Ϸ������");
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		int a=rand()%100+1;
		printf("��һ�������ǣ�%d\n",a);
		printf("�²��С��1Ϊ��0ΪС��");
		scanf("%d",&b);
		while(b!=1&&b!=0)
		{
			printf("���������룬1Ϊ��0ΪС��\n");
			printf("�²��С��1Ϊ��0ΪС��");
		    scanf("%d",&b);
		}
		printf("������룺");
		scanf("%d",&c);
		int d=rand()%100+1;
		printf("�ڶ��������ǣ�%d\n",d);
		if(b==0)
		{
			if(a>d)
			{
			printf("WIN\n");
			for(f=1;f<=1;f++)
			{
				e+=c;
			}
			printf("������%dԪ��\n",e);
			}
		    else if(a==d)
			{
			printf("һ����Ŷ\n");
			printf("������%dԪ��\n",e);
			}
		    else
			{
			printf("LOSE\n");
			for(f=1;f<=1;f++)
			{
				e-=c;
			}
			
			if(e<=0)
			{
				printf("�Ʋ��ˡ�");
				return 0;
			}
			printf("������%dԪ��\n",e);
			}
		}
		if(b==1)
		{
			if(a<d)
			{
			printf("WIN\n");
			for(f=1;f<=1;f++)
			{
				e+=c;
			}
			
			printf("������%dԪ��\n",e);
			}
		    else if(a==d)
			{
			printf("һ����Ŷ\n");
			printf("������%dԪ��\n",e);
			}
		    else
			{
			printf("LOSE\n");
			for(f=1;f<=1;f++)
			{
				e-=c;
			}
			if(e<=0)
			{
				printf("�Ʋ��ˡ�");
				return 0;
			}
			printf("������%dԪ��\n",e);
			}
		}
    }
	printf("������%dԪ��",e);	
	return 0;
}
