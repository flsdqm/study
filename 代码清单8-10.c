#include<stdio.h>
#include<math.h>
int main()
{
	int i,ch;
	int cnt[10]={0};
	while((ch=getchar())!=EOF)
	{
		if(ch>='0'&&ch<='9')
			cnt[ch-'0']++;
	}
	puts("数字字符的出现次数");
	for(i=0;i<10;i++)
		printf("%d:%d\n",i,cnt[i]); 
	return 0;
 } 
