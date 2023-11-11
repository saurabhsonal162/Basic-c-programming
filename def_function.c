#include<stdio.h>
#include<conio.h>
  void print1();          //declaration
int main()
{
	print1();
	printf("\n no parameter and no return");         //function called
}
void print1()            //function definition
{
   int a=3, b=5, c;
   c=a+b;
   printf("\n sum is %d",c);	
}
