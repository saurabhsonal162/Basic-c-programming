#include<stdio.h>
main()
{
	int n;
	printf("enter number for array range\n");
	scanf("%d",&n);
	int arr[n];
	//printf("size is %d", sizeof(arr));
	
	printf("\n enter your num to array ");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int a;
	for(a=0;a<n;a++)
	{
	 printf("\n%d",arr[a]);	
	}
	
	
	
}
