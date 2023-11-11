#include<stdio.h>
main()
{
	int arr[6];
	int i , loc=-1 , key, n=5;  // here n is the number of elements
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);	
	}
	key=3; // this is the value you want to search
    for(i=0;i<n;i++)
    {
    	if (arr[i]==key)
    	{
    	loc=i;	
    	//break;
		printf("\n%d",i+1);	
		}
	}
    if (loc!=-1)
    {
    	printf("\nelement found at location %d", loc+1);
	}
	else 
	{
		printf("element not found");
	}

}


