#include "行列互换.h"
#include<stdio.h>
int main()
{
	int i,j;
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2];
	printf("横向数组的序列:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%6d",a[i][j]);
			b[j][i]=a[i][j];
		}
		printf("\n");
	}
	printf("纵向数组的序列:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%6d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
