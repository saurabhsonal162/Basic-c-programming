#include<stdio.h>
main()
{
	char s;
	printf("enter your choice of character\n");
	scanf("%c",&s);
	switch(s)
	{
		case'a':
			printf("your choice is a ");
		break;	
		case'b':	
		    printf("\nyour choice is b ");
		break;    
		default:
			printf("your choice is not present");
		
		
	}
}
