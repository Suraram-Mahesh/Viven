// 30.WRITE A C PROGRAM TO FIND THE LENGTH OF A STRING USING A FOR LOOP?
//
#include<stdio.h>
void main()
{ 
  char str[50];
  printf("Enter the string : ");
  scanf("%s",str);
  int i=0,len=0;
  for(i=0;str[i]!='\0';i++)
  {
    //printf("%c",str[i]);
    len++;
  }
  printf("String : %s & Length of string : %d \n",str,len);
  
}
