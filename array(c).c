#include<stdio.h>
main()
{
	int arr[6];
	int i;
	printf("enter the elements\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<6;i++)
	{
		printf("\n%d",arr[i]);
	}
	
	int smallest;
	smallest=arr[0];
	for(i=0;i<6;i++)
	{
		if (arr[i]<smallest)
		{
			smallest=arr[i];
		}
	}
	printf("\nsmallest value is %d",smallest);
	
	int largest;
	largest=arr[0];
	for(i=0;i<6;i++)
	{
		if(arr[i]>largest)
		{
			largest=arr[i];
		}
	}
	printf("\nlargest value is %d", largest);
	
	
	
	
	
	
} 
