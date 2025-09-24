//5.WRITE A C PROGRAM TO READ THE AGE OF A CANDIDATE AND DETERMINE WHETHER HE IS ELIGIBLE TO CAST HIS/HER OWN VOTE?

#include<stdio.h>
int main(){
	while(1){
	int age;

	printf("Enter Age of a Person : ");
	scanf("%d",&age);

	if(age>=18)
		printf("The person is Eligible to Vote\n");
	else
		printf("The Person is not Eligible to Vote\n");


	}
}
