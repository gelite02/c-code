#include "冒泡排列.h"
#include<stdio.h>
int main()
{
	int i,j,t;
	int array[10];
	printf("请输入十个数:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
	for(j=0;j<9;j++)
	{
		for(i=0;i<9-j;i++)
		if(array[i]>array[i+1])
		{
			t=array[i];
			array[i]=array[i+1];
			array[i+1]=t;
		}
	}
	printf("按照从小到大的顺序排序:");
	for(i=0;i<10;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
	return 0;
}
