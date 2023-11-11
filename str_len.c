#include<stdio.h>
#include<string.h>
main()
{
	char x[100];
	int i=0;
	printf("enter the string :\n");
	gets(x);
	while(x[i]!='\0')
	{
		i++;
	}
	printf("length of the string is :%d",i);
}
