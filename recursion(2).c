#include<stdio.h>
int addnum(int); //declaration
main()
{
	int a=10;
	printf("addtion is : %d",addnum(a));    
	
}
int addnum(int x)
{
	if(x==0)
	return 0;
	else if(x==1)
	return 1;
	else
	return x+addnum(x-1);
	
}
