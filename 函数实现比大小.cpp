#include "����ʵ�ֱȴ�С.h"
#include<stdio.h>
int main()
{
	int Max(int x,int y);
	int a,b,max;
	printf("������������:");
	scanf("%d%d",&a,&b);
	max=Max(a,b);
	printf("max=%d\n",max);
	return 0;
}
int Max(int x,int y)
{
	int temp;
	temp=x>y?x:y;
	return temp;
}
