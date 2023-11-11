//malloc
#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p,n,i;
	printf(" enter the number of integers to be used\n ");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	
	if(p==NULL)
	{
		printf("no memory available");
		exit(1);
	}
	else
	{
		printf("memory allocation was successful\n");
		printf("enter the value \n");
		for(i=0;i<n;i++)
		{
			scanf("%d",p+i);
		}
		for(i=0;i<n;i++)
		{
			printf("%d",*(p+i));
		}
		
	}
	
	
	
}
