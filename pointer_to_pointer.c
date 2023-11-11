//pointer to a pointer
#include<stdio.h>
main()
{
	int i,*ptr,**ptr1;
	ptr=&i;
	ptr1=&ptr;
	printf("address i= %d ptr =%d ptr1=%d",&i ,&ptr,&ptr1);
	
}
