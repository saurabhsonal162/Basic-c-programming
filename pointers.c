#include<stdio.h>
main()
{
	int a=9;
	int *ptr;
	ptr=&a;
	printf("address of a :%p\n",ptr);
	printf("value of a: %d\n",*ptr);//dereferencing
	printf("address of ptr: %p\n",&ptr);
	printf("size of pointer is: %d\n",sizeof(ptr));
}
