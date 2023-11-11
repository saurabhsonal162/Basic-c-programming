#include<stdio.h>                          //2d array
main()
{ 
     int arr[2][2];
     int i,j;
     printf("enter values\n");
     for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d ",&arr[i][j]);
		}	
		
	}
	printf("show the elements \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",arr[i][j]);
		}	
		
	}

	
}

	





	
