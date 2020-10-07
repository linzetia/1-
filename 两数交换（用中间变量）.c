//两个数交换，不使用中间变量()，一般企业会使用中间变量
//使用中间变量的情况
//
#include<stdio.h>
int main()
{
	int a = 3, b = 5;
	int c;
	c = a;
	a = b;
	b = c;
	printf("a=%d\nb=%d\n",a,b);
	return 0;
}