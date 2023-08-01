#include "不能被3整除.h"
#include<stdio.h>
int main()
{
	int i=0;
	for(i=100;i<201;i++)
	{
		if(i%3!=0)//if(i%3==0)
				  //continue;
			printf("%d ",i);
	}
	printf("\n");
	return 0;
}
