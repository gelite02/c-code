#include "大写A转换成小写a.h"
#include<stdio.h>
int main()
{
	char character_Big,character_Small;
	character_Big = 'A';
	character_Small = character_Big + 32;
	printf("大写字母%c",character_Big);
	printf("的小写字母:%c\n",character_Small);
	return 0;
}

