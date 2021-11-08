#include<stdio.h>
int main()
{
    int n,i,a[11],s,j;
    scanf("%d",&n);
    for(i=0; i<n; i++)
		scanf("%d",&a[i]);
    s=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            	s=s+a[i]*10+a[j];
        }
    }
    printf("%d\n",s);
	return 0;
}
