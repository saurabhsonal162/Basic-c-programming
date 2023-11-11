#include <stdio.h>
main()
{
	int i=5;
	if(i<7)
	{
		goto abc;
	}
	else if(i>6)
	{
		goto xyz;
	}
	abc:
		printf("number is greater than 6");
	xyz:
	    printf("number is smaller than 7");	
}
