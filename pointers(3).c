#include<stdio.h>
main()
{
	int a[]={10,2,3,4,5};
	int *p=a;
	//printf("%d\n",*p);
	//printf("%d\n",*(p+1));
	//printf("%d\n",*(p+2));
	//printf("%d\n",*(p+3));
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(a+i));
	}
}
