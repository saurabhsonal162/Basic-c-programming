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
	struct emp e={"abc",20,1000};
	struct emp *ptr;
	ptr=&e;
	printf("name is %s age is %d salary is %d\n",(*ptr).name,(*ptr).age,(*ptr).salary);
	printf("name is %s age is %d salary is %d\n",e.name,e.age,e.salary);
	printf("name is %s age is %d salary is %d\n",ptr->name,ptr->age,ptr->salary);
}
