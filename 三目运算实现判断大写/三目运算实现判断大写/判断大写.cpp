#include "�жϴ�д.h"
#include<stdio.h>
int main()
{
	char character_Big,character_Small;
	printf("��������ĸ��");
	scanf("%c",&character_Big);
	character_Small=(character_Big>='A'&&character_Big<='Z')?(character_Big+32):character_Big;
	printf("%c\n",character_Small);
	return 0;
}
