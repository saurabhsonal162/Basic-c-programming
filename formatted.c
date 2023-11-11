#include<stdio.h>
main()
{
	printf("%d",890);
	printf("\n%d",-890);
	printf("\n%+d",890);
	printf("\n%-d",890);
	printf("\n%u",-890);
	printf("\n%e",8.90);
	printf("\n%E",8.90);
	
// width 
	printf("\n\n%4d",890);
	printf("\n%4d",8901);
	printf("\n%08d",890);
	printf("\n%-08d",890);
	
//precision
    int i=897;
	float f=123.56789;
	char c[]="Happy birthday";
	
	printf("\n\n%.5d",i);
	printf("\n%.2f",f);	
	printf("\n%.2s",c);
	printf("\n%.8s",c);
	
	
}
