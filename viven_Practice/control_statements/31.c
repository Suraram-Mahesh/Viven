// 31.WRITE A C PROGRAM TO CONVERT A STRING TO UPPERCASE USING A WHILE LOOP?

#include<stdio.h>
#include<ctype.h>
void main()
{ 
  char str[50];
  printf("ENter the string :"); 
  scanf("%s",str);
  int i=0;
  while(str[i]!='\0')
  {
    str[i]=toupper(str[i]);
    i++;
  }
  printf("String in UpperCase : %s \n",str);
  
}
