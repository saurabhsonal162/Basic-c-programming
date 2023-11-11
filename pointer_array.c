#include<stdio.h>
main()
{
	int a[3]={4,8,9};
	int *ptr[3],i;
	for(i=0;i<3;i++)
	{
		ptr[i]=&a[i];
	}
	for(i=0;i<3;i++)
	{
		printf("%d\n",*ptr[i]);
	}
}
