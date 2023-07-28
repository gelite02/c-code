#include "判断是否是闰年.h"
#include<stdio.h>
int main()
{
	int year;
	printf("随意输入一年：");
	scanf("%d",&year);
	if((year%4==0&&year%100!=0)||year%400==0)
	{
		printf("%d是润年\n",year);
	}
	else
	{
		printf("%d不是闰年\n",year);
	}
	return 0;
}
