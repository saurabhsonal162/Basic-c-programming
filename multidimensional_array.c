#include<stdio.h>
main()
{
	int i,j;
	int arr[2][2]={{1,2},{3,4}};
	int arr1[2][2]={2,3,4,5};
	int arr2[2][2]={{1},{3,4}};
	int arr3[2][2]={0};
	int arr4[][2]={1,2,3};
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d", arr3[i][j]);
		}	
	printf("\n");	
	}

	
}
