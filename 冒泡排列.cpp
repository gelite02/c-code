#include "ð������.h"
#include<stdio.h>
int main()
{
	int i,j,t;
	int array[10];
	printf("������ʮ����:");
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
	printf("���մ�С�����˳������:");
	for(i=0;i<10;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
	return 0;
}
