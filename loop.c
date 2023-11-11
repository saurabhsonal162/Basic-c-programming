#include<stdio.h>
main()
{
int i=0;
int num;
int sum=0;
printf("enter your number to find sum");
scanf("%d",&num);
while(i<=num)
{
	sum+=i;
	i++;
	}	
	printf("%d",sum);
}
