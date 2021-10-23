#include<stdio.h>
#include<algorithm>
using namespace std; 
int main()
{
	int x[50];
	for(int i=0;i<10;i++)
	scanf("%d",&x[i]);
	sort(x+0,x+10);//不写最后一个，默认从小到大排序，x+0，+0可省略。相当于左闭右开区间，即0~9排序。 
	for(int i=0;i<10;i++)
	printf("%d ",x[i]);
	return 0;
}
