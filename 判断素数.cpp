#include "�ж�����.h"
#include<stdio.h>
int main()
{
	int i,numble;
	printf("���������һ����:");
	scanf("%d",&numble);
	for(i=2;i<=numble-1;i++)
	{
		if(numble%i==0)
			break;
	}
	if(i<numble)
	{
		printf("%d��������",numble);
	}
	else
	{
		printf("%d������",numble);
	}
	return 0;
}
