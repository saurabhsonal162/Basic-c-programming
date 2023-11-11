#include<stdio.h>
void fun1()
{
	auto int a =10;
	printf("\nvalue of a in fun1 is :%d",a);
}

void fun2()
{
	auto int a =12;
	printf("\nvalue of a in fun2 is :%d",a);
}
main()
{
	fun1();
	fun2();
}
