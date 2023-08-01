#include "4X5矩阵.h"
#include<stdio.h>
int main()
{
	int i,j;
	int temp=0;
	for(i=1;i<5;i++)//外层循环做行
	{
		for(j=1;j<6;j++,temp++)
		{
			if(temp%5==0)
			{
				printf("\n");
			}
			printf("%d\t",i*j);
		}
	}
	return 0;
}
