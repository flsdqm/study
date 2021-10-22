#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,t,a[100];
	while(scanf("%d",&n)!=EOF)
	{
	  	if(n==0)
	   	break;
	  	for(i=0;i<n;i++)
	  	{
	  		scanf("%d",&a[i]);
		}
		for(j=0;j<n-1;j++)
		{
			for(i=n-1;i>j;i--)
			{
	   			if(abs(a[j])>abs(a[i]))
	   			{
		   		 	t=a[j];
		    		a[j]=a[i];
	     			a[i]=t;
		    	}
			}
		}
	   for(i=0;i<n;i++)
		{
	    	if(i!=n-1)
			{
		   		printf("%d ",a[i]);
			}
	    	else
	    	{
	   			printf("%d\n",a[i]);
			}
		}
	}
	return 0;
}
	
