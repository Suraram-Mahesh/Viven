//19.WRITE A C PROGRAM TO FIND THE SUM OF DIGITS OF A NUMBER USING A WHILE LOOP?
//
#include<stdio.h>
int main()
{
  int num,sum=0,temp;
  printf("Enter the Number : ");
  scanf("%d",&num);
  
  temp=num;
  while(temp!=0)
  {
    int digit = temp%10;
    sum = sum +digit;
    temp=temp/10;
    
  }
  printf("Sum of Digits of Number %d is %d \n",num,sum);
}
