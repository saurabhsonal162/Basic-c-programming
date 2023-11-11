#include<stdio.h>
main()
{
	//int *ptr=NULL;
	//printf("value of ptr is :%d",ptr);
	
	int x=10,b=9;
	char a='c';
	void *ptr;
	ptr=&x;
	printf("value of generic ptr is :%d",*(int*)ptr);
	
	ptr=&a;
	printf("\nvalue of generic ptr is :%c",*(char*)ptr);
	
}
