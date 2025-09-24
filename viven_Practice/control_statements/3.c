#include<stdio.h>
int main(){
	
	while(1){
	int num;
	printf("Enter the NUmber : ");
	scanf("%d",&num);
	
	if(num<0)
		printf("Entered number is -ve\n");
	else if(num>0)
		printf("Entered number is +ve\n");
	else
		printf("Entered number is Zero\n");


}}
