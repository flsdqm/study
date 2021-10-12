#include<stdio.h>
int main()
{
	int i;
	for (i=10; i> 1; i /=2 ) 
	//C语言中for循环第一次不用增量判断（即第三个），后面每次要先增量判断，再确定条件是否成立。 
	{
		
        printf("%d ", i++);
    }
    return 0; 
}

 


