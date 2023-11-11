#include<stdio.h>         //replace the blank spaces with $ sign in the string...........
#include<string.h>
main()
{
	char str[20];
	int i=0;
	printf("enter string:\n");
	gets(str);
	while(str[i]!='\0')
	{
		if (str[i]==' ')
		{
			str[i]='$';
		}
		i++;
	}
	
	
	
}
