#include "递归求年龄.h"
#include<stdio.h>
int main()
{
	int age(int temp);
	int number;
	int people_Age;
	printf("输入想知道的第几个孩子:");
	scanf("%d",&number);
	people_Age=age(number);
	printf("第%d个学生的年龄是%d岁\n",number,people_Age);
	return 0;
}
int age(int temp)
{
	int people_Age;
	if(temp==1)
	{
		people_Age=10;
	}
	else
	{
		people_Age=age(temp-1)+2;
	}
	return people_Age;
}