#include "��Ϣ��.h"
#include<stdio.h>
int main()
{
	printf("��һ�ַ���Ϊ�����ڣ�������Ϊ0.0036\n");
	printf("�ڶ��ַ���Ϊ��һ���ڶ��ڣ�������Ϊ0.0225\n");
	printf("�����ַ���Ϊ�������ΰ��궨�ڣ�������Ϊ0.0198\n");
	float NLL1,NLL2,NLL3;
	NLL1=0.0036;//��ʼ����һ��������
	NLL2=0.0225;//��ʼ���ڶ���������
	NLL3=0.0198;//��ʼ��������������
	float Bj,Bxh1,Bxh2,Bxh3;
	Bj=10000;
	Bxh1=Bj*(1+NLL1);
	Bxh2=Bj*(1+NLL2);
	Bxh3=Bj*(1+NLL3/2)*(1+NLL3/2);
	printf("��һ�ֱ�Ϣ��:%f\n",Bxh1);
	printf("�ڶ��ֱ�Ϣ��:%f\n",Bxh2);
	printf("�����ֱ�Ϣ��:%f\n",Bxh3);
	return 0;
}
