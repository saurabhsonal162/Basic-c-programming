#include <stdio.h>
main()
{   int digit;
	int n;
	int count;
    scanf("%d",&n);
    while(n!=0)
    {
    	digit=n%10;
    	count++;
    	n=n/10;
	}
	printf("%d",digit);
}
