#include<stdio.h>
int fact(int); //declaration
main()
{
	int a =5;
	printf("factorial is : %d",fact(a));    
	
}
int fact(int x)
{
	if(x==0 || x==1)
	return 1;
	else
	return x*fact(x-1);
	
}
