#include<stdio.h>
#include<string.h>
main()
{
	char s1[50]="Hello  ";
	char s2[20]="Hello";
	//strcat(s1,s2);
	//printf("%s\n",s1);
	//strncat(s1,s2,5);
	//printf("%s\n",s1);
	int x;
	//x=strncmp(s1,s2,2);
	//printf("%d",x);            //strlen() strrev() strlwr() strupr()
	//x=strlen(s1);
	printf("%s",strrev(s1));
	printf("%s",strlwr(s1));
	printf("%s",strupr(s1));
	
}
