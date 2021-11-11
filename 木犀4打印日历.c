#include<stdio.h>
int main()
{
	int year,month,week,day=1,i,j;
	scanf("%d",&year);
	if(year%4==0||year%400==0&&year%3200!=0)
	{
		int a[14]={31,29,31,30,31,30,31,31,30,31,30,31,31,29};
		for(month=1;month<13;month++)
		{
			day=1;
			printf("     %d月       \n",month);
			if(month==1)
			{
				month=13;
				year--;
			}
			if(month==2)
			{
				month=14;
			}
			week=(day + 2*month + 3*(month+1)/5 + year + year/4 - year/100 + year/400) % 7;
			printf(" 日 一 二 三 四 五 六\n");
			             
			if(week==6)
			{
				putchar(' ');
				printf("%d",day);
				week=0;
			} 
			else
			{
				for(i=0;i<3*(week+2)-1;i++)
				{
					putchar(' ');
				}             
				printf("%d",day);
			}
			for(j=week+1;j<6;j++)
			{
				putchar(' ');
				day++;
				printf(" %d",day);
			}
			putchar('\n');
			while(a[month-1]-day>0)
			{
				for(j=0;j<7;j++)
				{
					day++;
					if(day<10)
					putchar(' ');
					if(day>a[month-1])
						break;
					printf(" %d",day);
					}
				putchar('\n');
			}
			
			if(month==13)
				month=1;
			if(month==14)
			{
				month=2;
				year++;
			}	
		}
	}
	else
	{
		int a[14]={31,28,31,30,31,30,31,31,30,31,30,31,31,29};
		for(month=1;month<13;month++)
		{
			day=1;
			printf("     %d月       \n",month);
			if(month==1)
			{
				month=13;
				year--;
			}
			if(month==2)
			{
				month=14;
			}
			week=(day + 2*month + 3*(month+1)/5 + year + year/4 - year/100 + year/400) % 7;
			printf(" 日 一 二 三 四 五 六\n");
			             
			if(week==6)
			{
				putchar(' ');
				printf("%d",day);
			} 
			else
			{
				for(i=0;i<3*(week+2)-1;i++)
				{
					putchar(' ');
				}             
				printf("%d",day);
			}
				for(j=week+1;j<6;j++)
				{
					putchar(' ');
					day++;
					printf(" %d",day);
				}
				putchar('\n');
				while(a[month-1]-day>0)
				{
					for(j=0;j<7;j++)
					{
						day++;
						if(day<10)
							putchar(' ');
						if(day>a[month-1])
							break;
						printf(" %d",day);
					}
					putchar('\n');
				}
			if(month==13)
				month=1;
			if(month==14)
			{
				month=2;
				year++;
			}	
			
			
		}
	}
	return 0;
 } 
