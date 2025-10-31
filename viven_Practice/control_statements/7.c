//7.WRITE A C PROGRAM TO FIND THE LARGEST OF THREE NUMBERS?

#include<stdio.h>

int main(){
	while(1){
	int a,b,c;
	printf("Enter the values of A B C : ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
		printf("A is Largest %d\n",a);
	else if(b>a && b>c)
		printf("B is Largest %d\n",b);
	else if(c>a && c>b)
		printf("C is Largest %d\n",c);
	else
		printf("All are Equal\n");


}}
