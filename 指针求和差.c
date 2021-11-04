#include<stdio.h>
void sum_diff(int n1,int n2,int *sum,int *diff)
{
	*sum=n1+n2;
	*diff=(n1>n2)?n1-n2:n2-n1;
}
int main()
{
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	sum_diff(a,b,&c,&d);
	printf("%d %d",c,d);
	return 0;
 } 
