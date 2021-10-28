#include<stdio.h>
int main()
{
	int n,m,i,j,x=0,y=0;
	int a[50][5];
	double p,q[5],sum1=0,sum2=0;
	while(~scanf("%d %d",&n,&m))
	{
		if(n>50||m>5)
			break;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
				scanf("%d",&a[i][j]);
		}
		for(i=0;i<n;i++)
		{
			sum1=0;
			for(j=0;j<m;j++)
			{
				sum1+=a[i][j];
			    
			}
			p=sum1/m;
			printf("%.2f ",p);
			
		}
	
		putchar('\n');
		for(j=0;j<m;j++)
		{
			sum2=0;
			for(i=0;i<n;i++)
			{
				sum2+=a[i][j];
			     
			}
			q[j]=sum2/m;
			printf("%.2f ",q[j]);
			
			
		}//可以写个函数
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i][j]<q[j])
		    	break;
		    	x++;
			}
			if(x==m)
			y++;
		}
		putchar('\n');
		printf("%d",y);
	}
	return 0;
 } 
