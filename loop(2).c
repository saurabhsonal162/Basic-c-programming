#include<stdio.h>
main()
{
int i=1;
int num;
int fact=1;
printf("enter your number to find factorial");
scanf("%d",&num);
while(i<=num)
{
	fact*=i;
	i++;
	}	
	printf("%d",fact);
}
