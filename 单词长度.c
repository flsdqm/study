#include<stdio.h>
int main()
{
    char c;
    int x=0,cnt=0;
    while (~scanf("%c",&c))
	{
        if (c=='.')
		{
            if (cnt)
			{
                if (x==0)
				{
                    printf("%d",cnt);
                    x=1;
                }
                else printf(" %d",cnt);
                	cnt=0;
            }
            break;
        }
        if (c==' ')
		{
            if (cnt)
			{
                if (x==0)
				{
                    printf("%d",cnt);
                    x=1;//看是不是第一个单词决定要不要空格 
                }
                else printf(" %d",cnt);
                	cnt=0;
            }
            continue;
        }
        cnt++;
    }
    printf("\n");
    return 0;
}
