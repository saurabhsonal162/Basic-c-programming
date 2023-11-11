#include<stdio.h>
main()
{
	int arr[6]={1,5,8,6,3,2};
	int i,j,n,a;
	n=6;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				arr[j]=arr[j]^arr[j+1];
				arr[j+1]=arr[j]^arr[j+1];
				arr[j]=arr[j]^arr[j+1];
				
			}
		}		
	}
	for(i=0;i<n;i++)
	{
			printf("\t%d",arr[i]);
	}
			
	

	
	
}
