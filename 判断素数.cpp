#include "判断素数.h"
#include<stdio.h>
int main()
{
	int i,numble;
	printf("请随机输入一个数:");
	scanf("%d",&numble);
	for(i=2;i<=numble-1;i++)
	{
		if(numble%i==0)
			break;
	}
	if(i<numble)
	{
		printf("%d不是素数",numble);
	}
	else
	{
		printf("%d是素数",numble);
	}
	return 0;
}
