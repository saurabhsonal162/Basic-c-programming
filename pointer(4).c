// write a program to find the sum of all the elements to an array using pointers
#include<stdio.h>
main()
{
	int a[]={18,42,93,34,15};
	int *p=a;
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+*(p+i);
	}
	printf("%d\n",sum);
}
