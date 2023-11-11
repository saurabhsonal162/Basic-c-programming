#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{ 
	 if(a>c)
	 {
	    printf("%d is greater",a);
	 }
	   else
	 {
	 	printf("%d is greatest",c);
	 }
	}
	else
	{
		if(b>c)
		printf("%d is greater",b);
		else
		printf("%d is greater",c);
	}
}
