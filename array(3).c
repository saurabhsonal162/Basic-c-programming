#include<stdio.h>
main()
{
    int x=0,y=0;
	int arr[6];
	int sum=0;
	printf("\n enter your num to array ");
	int i;
	for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	int a;
	for(a=0;a<6;a++)
	{
	 printf("\n%d",arr[a]);	
	}
	for(i=0;i<6;i++)
	{
		sum=sum+arr[i];
	}
	printf("\n\n%d",sum);
    for(i=0;i<6;i++)
    {
    	if(arr[i]%2==1)
		{
			printf("\nodd numbers is %d",arr[i]);
			x=x+arr[i];
		}
		
        else 
		{
			printf("\neven numbers is %d ",arr[i]);
			y=y+arr[i];
		}
	}
	printf("\n sum of odd numbers is:%d",x);
	printf("\nsum of even numbers is:%d",y);
	
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
