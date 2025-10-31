//28.WRITE A C PROGRAM TO CHECK WHETHER A GIVEN STRING IS A PALINDROME OR NOT USING A FOR LOOP?
//
#include<stdio.h>
#include<string.h>
void main()
{   
  char str[100];
  printf("Enter the String : ");
  fgets(str,sizeof(str),stdin);
  str[strcspn(str, "\n")] = '\0';
  int len=strlen(str);
  int flag,i=0;
  while(i< len/2)
  {
    if(str[i]!= str[len-i-1])
    {
      flag =1;
      break;
    }
    i++;
  }
  if (flag == 0)
        printf("Palindrome string\n");
  else
        printf("Not a palindrome\n");
}
