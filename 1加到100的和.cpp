#include "1加到100的和.h"
#include<stdio.h>
//for循环
int main()
{
	int i,sum = 0;
	for(i=1;i<101;i++)
	{
		sum=sum+i;
	}
	printf("%d\n",sum);
	return 0;
}
//while循环
//int main()
//{
//	int i=1,sum = 0;
//	while(i<101)
//	{
//		sum=sum+i;
//		i++;
//	}
//	printf("%d\n",sum);
//	return 0;
//}
//do while循环
//int main()
//{
//	int i=1,sum=0;
//	do{
//		sum=sum+i;
//		i++;
//	}while(i<101);
//	printf("%d\n",sum);
//	return 0;
//}