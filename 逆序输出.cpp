#include "�������.h"
#include<stdio.h>
int main()
{
	int arr[10];
	int i;
	printf("ԭ����˳��:");
	for(i=0;i<10;i++)
	{
		arr[i]=i;
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("�������к�:");
	for(i=9;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
