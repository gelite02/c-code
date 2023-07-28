#include "成绩等级判别.h"
#include<stdio.h>
int main()
{
	char grade;
	printf("输入成绩级别:");
	scanf("%c",&grade);
	printf("成绩段:");
	switch(grade)
	{
		case'A':printf("85-100\n");break;
		case'B':printf("70-84\n");break;
		case'C':printf("60-69\n");break;
		case'D':printf("不及格小于60\n");break;
		default:printf("输入成绩等级有误\n");
	}
	return 0;
}
