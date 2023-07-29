#include "九九乘法表.h"
#include<stdio.h>
//长方形
//int main()
//{
//	int i,j;
//	for(i=1;i<=9;i++)
//	{
//		for(j=1;j<=9;j++)
//		{
//			printf("%d*%d=%2d\t",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//右三角
//int main()
//{
//	int i,j;
//	for(i=1;i<=9;i++)
//	{
//		for(j=1;j<=9;j++)
//		{
//			if(j<i)
//			{
//				printf(" ");
//			}
//			else
//			{
//				printf("%d*%d=%2d\t",i,j,i*j);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//左三角
int main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%2d\t",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}