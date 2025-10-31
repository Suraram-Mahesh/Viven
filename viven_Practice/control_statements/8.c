//8.WRITE A C PROGRAM TO CHECK WHETHER A CHARACTER IS A VOWEL OR CONSONANT?

#include<stdio.h>
#include<ctype.h>

int main(){
	
	while(1){
	char ch;

	printf("Enter the Character : ");
	scanf("%c",&ch);

	ch=tolower(ch);

	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		
		printf("It is vowel %c \n",ch);
		
	}
	else
		printf("It is Consonant\n");
}}
