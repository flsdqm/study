#include<stdio.h>
#include<algorithm>
using namespace std; 
int main()
{
	int x[50];
	for(int i=0;i<10;i++)
	scanf("%d",&x[i]);
	sort(x+0,x+10);//��д���һ����Ĭ�ϴ�С��������x+0��+0��ʡ�ԡ��൱������ҿ����䣬��0~9���� 
	for(int i=0;i<10;i++)
	printf("%d ",x[i]);
	return 0;
}
