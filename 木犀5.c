#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main()
{
	printf("猜数游戏\n游戏规则：初始100元，输入游戏轮数，每轮先会显示一个数字，然后猜第二个数字是否比第一个大，之后输入筹码，会显示第二个数。\n得到100元。\n");
	int t,i,b,c,f;
	int e=100;
	srand((unsigned)time(NULL));
	printf("请输入游戏轮数：");
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		int a=rand()%100+1;
		printf("第一个数字是：%d\n",a);
		printf("猜测大小：1为大，0为小：");
		scanf("%d",&b);
		while(b!=1&&b!=0)
		{
			printf("请重新输入，1为大，0为小。\n");
			printf("猜测大小：1为大，0为小：");
		    scanf("%d",&b);
		}
		printf("输入筹码：");
		scanf("%d",&c);
		int d=rand()%100+1;
		printf("第二个数字是：%d\n",d);
		if(b==0)
		{
			if(a>d)
			{
			printf("WIN\n");
			for(f=1;f<=1;f++)
			{
				e+=c;
			}
			printf("现在有%d元。\n",e);
			}
		    else if(a==d)
			{
			printf("一样大哦\n");
			printf("现在有%d元。\n",e);
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
				printf("破产了。");
				return 0;
			}
			printf("现在有%d元。\n",e);
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
			
			printf("现在有%d元。\n",e);
			}
		    else if(a==d)
			{
			printf("一样大哦\n");
			printf("现在有%d元。\n",e);
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
				printf("破产了。");
				return 0;
			}
			printf("现在有%d元。\n",e);
			}
		}
    }
	printf("最终有%d元。",e);	
	return 0;
}
