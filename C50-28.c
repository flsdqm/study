#include<stdio.h>
int main()
{
	int i,j,n,k=0;
 	char a[1000];
    scanf("%d",&n);
 	getchar();
  	while(n--)
	{
		gets(a);//�Ӽ��̶�ȡ�ַ�������������ĩβ���'\0'�ַ� 
		for(j=0;a[j]!='\0';j++)
	  	{
	   		if(a[j]>='0'&&a[j]<='9')
	    		k++;
	  	}
	  	printf("%d\n",k);
		k=0;
  	}
 return 0;
}

