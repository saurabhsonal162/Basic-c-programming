#include<stdio.h>
main()
{
	int arr[5]={1,3,4,5,8};
	int n=5;
	int i=0, index=3;
	int value=3;
	printf("\n printing the elements of the array before insertion\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
	for(i=n;i>=index;--i)
	{
		arr[i+1]=arr[i];
	}
	arr[index]=value;
	n++;
	for(i=0;i<n;i++)
	{
	printf("\n %d ",arr[i]);	
	}
	
	
}
