#include "存款本息和.h"
#include<stdio.h>
int main()
{
	printf("第一种方法为：活期，年利率为0.0036\n");
	printf("第二种方法为：一年期定期，年利率为0.0225\n");
	printf("第三种方法为：存两次半年定期，年利率为0.0198\n");
	float NLL1,NLL2,NLL3;
	NLL1=0.0036;//初始化第一种年利率
	NLL2=0.0225;//初始化第二种年利率
	NLL3=0.0198;//初始化第三种年利率
	float Bj,Bxh1,Bxh2,Bxh3;
	Bj=10000;
	Bxh1=Bj*(1+NLL1);
	Bxh2=Bj*(1+NLL2);
	Bxh3=Bj*(1+NLL3/2)*(1+NLL3/2);
	printf("第一种本息和:%f\n",Bxh1);
	printf("第二种本息和:%f\n",Bxh2);
	printf("第三种本息和:%f\n",Bxh3);
	return 0;
}
