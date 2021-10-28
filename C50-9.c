#include<stdio.h>
int main()
{
    int day[]={0,31,28,31,30,31,30,31,31,30,31,30};
    int y,m,d,i,sum;
    while(~scanf("%d/%d/%d",&y,&m,&d))
    {
        sum=0;
        for(i=0;i<m;i++)
        {
        	sum+=day[i];
    	}
        sum+=d;
        if((y%4==0&&y%100!=0||y%400==0)&&m>2)
        {
        	sum+=1;
		}
        printf("%d\n",sum);
    }
    return 0;
}

