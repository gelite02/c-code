#include "�ɼ��ȼ��б�.h"
#include<stdio.h>
int main()
{
	char grade;
	printf("����ɼ�����:");
	scanf("%c",&grade);
	printf("�ɼ���:");
	switch(grade)
	{
		case'A':printf("85-100\n");break;
		case'B':printf("70-84\n");break;
		case'C':printf("60-69\n");break;
		case'D':printf("������С��60\n");break;
		default:printf("����ɼ��ȼ�����\n");
	}
	return 0;
}
