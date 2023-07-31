#include "逆序输出.h"
#include<stdio.h>
int main()
{
	int arr[10];
	int i;
	printf("原来的顺序:");
	for(i=0;i<10;i++)
	{
		arr[i]=i;
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("逆序排列后:");
	for(i=9;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
