#include <stdio.h>

void Tower_of_Hanoi(int n,char column_a,char column_b,char column_c)
{
	if(1==n)
	{
		printf("%c移动到%c\n",column_a,column_c);
	}
	else
	{
		Tower_of_Hanoi(n-1,column_a,column_c,column_b);
		printf("%c移动到%c\n",column_a,column_c);
		Tower_of_Hanoi(n-1,column_b,column_a,column_c);
	}
}
int main()
{
	char column1='A';
	char column2='B';
	char column3='C';
	int num=1;
	printf("请输入盘子个数：>");
	scanf("%d",&num);
	Tower_of_Hanoi(num,column1,column2,column3);
	return 0;
}