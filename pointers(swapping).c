#include<stdio.h>
void swap1(int*, int*);
main()
{
	int a=7,b=9;
	printf("before swapping the value of a=%d b=%d \n",a,b);
	swap1(&a,&b);
	printf("\nafter swapping in main, values of a=%d b=%d",a,b);
}
void swap1(int *x, int *y)
{
	int temp;
	int *ptemp=&temp;
	*ptemp=*x;
	*x=*y;
	*y=*ptemp;
	printf("\nvalue of a =%d b= %d ",*x,*y);
}
