#include<stdio.h>
main()
{
	int i, j, k;
	k=5;
	for(i=0;i<k;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d*%d=%d",i,j,i*j);
			printf("\n");
		}
		printf("\n");
	}
  	
}
