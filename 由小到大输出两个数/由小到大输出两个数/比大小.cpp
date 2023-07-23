#include "比大小.h"
#include<stdio.h>
int main()
{
	float num1,num2;
	printf("请输入两个数：");
	scanf("%f,%f",&num1,&num2);
	float temp;
	if(num1>num2)
	{
		temp=num1;
		num1=num2;
		num2=temp;
	}
	printf("%.2f,%.2f\n",num1,num2);
	return 0;
}
