#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int rollno;
	float cgpa;
};
main()
{
	struct student s1;
    gets(s1.name);
    scanf("%d",s1.rollno);
    scanf("%f",s1.cgpa);
    puts(s1.name);
	printf(" rollno=%d cgpa=%f \n",s1.rollno,s1.cgpa);
	
}
