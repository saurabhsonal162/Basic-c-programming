#include<stdio.h>
#include<string.h>
struct emp
{
	char name[20];
	int age;
	int salary;
};
main()
{
	int i;
	struct emp e[100];
	for(i=0;i<2;i++)
	{
	printf("enter the name, age and salary\n");
	gets(e[i].name);
	fflush(stdin);
	scanf("%d",&e[i].age);
	fflush(stdin);	
	scanf("%d",&e[i].salary);
	fflush(stdin);
	}
	for(i=0;i<2;i++)
	{
		printf("name is %s\n",e[i].name);
		printf("age is %d\n",e[i].age);
		printf("salary is %d\n",e[i].salary);
	}
	
}
