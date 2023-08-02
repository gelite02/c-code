#include "Ñî»ÔÈı½Ç.h"
#include<stdio.h>
int main()
{
	int i,j;
	int array[10][10];
	for(i=0;i<10;i++)
	{
		array[i][i]=1;
		array[i][0]=1;
	}
	for(i=2;i<10;i++)
	{
		for(j=1;j<=i-1;j++)
		{
			array[i][j]=array[i-1][j]+array[i-1][j-1];
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%6d",array[i][j]);
		}
	}
	printf("\n");
	return 0;
}
