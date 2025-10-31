// 29.WRITE A C PROGRAM TO CONCATENATE TWO STRINGS WITHOUT USING LIBRARY FUNCTIONS USING A WHILE LOOP?

#include<stdio.h>
#include<string.h>
void main()
{ 
  char str[]="Mahesh";
  char str2[]="Suraram";
  //int len=strlen(arr);
  printf("%s \n",str);
  printf("%s \n",str2);
  int i=0;
  while(str[i]!='\0')
  { 
    i++;
    }
  int j=0;
  while(str2[j]!=0)
  {
    str[i]=str2[j];
    i++;
    j++;
  }
  str[i]='\0';
  
  printf("Added String : %s \n",str);
}
