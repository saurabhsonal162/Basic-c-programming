#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter three numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("\n %d is largest",a);
	}
	else if(b>a && b>c)
	{
		printf("\n%d is largest",b);
	}
	else
	{
		printf("\n%d is largest",c);
	}
	
	
}

