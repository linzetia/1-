//两个数交换，不使用中间变量(法一，但加减法会出现溢出现象)
#include<stdio.h>
int main()
{
	int a = 3, b = 5;
	a = b - a;
	b = b - a;
	a = b + a;
	printf("a=%d\nb=%d\n", a, b);

	return 0;
}