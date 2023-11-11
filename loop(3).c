#include<stdio.h>
int main(){
	int num;
	printf("enter your num");
	scanf("%d",&num);
	for(int i=2;num>=i;i=i+2){
		printf("\n%d",i);
	}
	for(int i=1;num>=i;i=i+2){
		printf("\n\n%d",i);
	}
	return 0;
}
