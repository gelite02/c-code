#include "�ݹ�������.h"
#include<stdio.h>
int main()
{
	int age(int temp);
	int number;
	int people_Age;
	printf("������֪���ĵڼ�������:");
	scanf("%d",&number);
	people_Age=age(number);
	printf("��%d��ѧ����������%d��\n",number,people_Age);
	return 0;
}
int age(int temp)
{
	int people_Age;
	if(temp==1)
	{
		people_Age=10;
	}
	else
	{
		people_Age=age(temp-1)+2;
	}
	return people_Age;
}