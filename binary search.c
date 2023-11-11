#include<stdio.h>
main()
{

	int arr[50],n, beg , mid, last ,i ,key, loc=-1;
	n=7;
	beg=0;
	last= n-1;
	key= 5;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	while(beg<=last)
	{
		mid=(beg+last)/2;
		if(arr[mid]==key)
		{
		 loc=mid;
		 break;	
		}
		else if(arr[mid]>key)
		{
			last=mid-1;
		}
		else if(arr[mid]<key)
		{
			beg=mid+1;
		}
		
	}
	if(loc!=-1)
	{
	printf("element found at %d",loc+1);	
	}
	else
	{
		printf("element not found");
	}
	
}
