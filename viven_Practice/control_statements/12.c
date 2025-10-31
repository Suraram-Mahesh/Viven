//12.WRITE A C PROGRAM TO CHECK WHETHER A CHARACTER IS UPPERCASE OR LOWERCASE?

#include<stdio.h>
int main(){
  while(1){
  char ch;
  printf("Enter the Character : ");
  scanf(" %c",&ch);
  
  if(ch>='A'&& ch<='Z')
  {   
    printf("Entered Character is Uppercase : %c \n",ch);
  }
  else if(ch>='a'&& ch<='z')
  {   
    printf("Entered Character is Lowercase : %c \n",ch);
  }
  else
   { printf("Entered character is not Alphabet");}


}} 
