//21.WRITE A C PROGRAM TO REVERSE A GIVEN NUMBER USING A WHILE LOOP?

#include<stdio.h>
int main()
{
  int num,rev=0;
  printf("Enter the Number to Reverse : ");
  scanf("%d",&num);
  
  while(num!=0)
  {
    int digit=num%10;
    rev=rev*10+digit;
    num=num/10;
  }
  printf("The Reversed Number is %d \n",rev);
}
