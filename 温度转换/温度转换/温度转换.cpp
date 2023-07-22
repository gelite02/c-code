#include "温度转换.h"
#include<stdio.h>
int main()
{
	int c;
	float f;
	printf("请输入摄氏温度：");
	scanf("%d",&c);//输入摄氏温度
	printf("华氏温度为：%.2f",c*9.0/5+32);//输出华氏温度
	return 0;
}