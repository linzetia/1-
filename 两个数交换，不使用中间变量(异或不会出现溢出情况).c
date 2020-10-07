//两个数交换，不使用中间变量(法二，异或不会出现溢出情况)
#include<stdio.h>
int main()
{
	int a = 3, b = 5;
	printf("交换前：a=%d\n\tb=%d\n",a,b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后：a=%d\n\tb=%d\n", a,b);
	return 0;
}