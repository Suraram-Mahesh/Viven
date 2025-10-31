// 39.WRITE A PROGRAM IN C TO CHECK WHETHER A GIVEN NUMBER IS A PALINDROME OR NOT USING WHILE LOOPS AND IF-ELSE STATEMENTS?

#include<stdio.h>
void main()
{
    int num,rev,temp,rem;
    printf("Enter the Number : ");
    scanf("%d",&num);
    temp=num;
    rev=0;
    while(num!=0)
    {
      rem=num % 10;
      rev=rev * 10 + rem;
      num= num / 10;
    }
    if(temp == rev)
    { printf("%d is a Palindrome \n",temp); }
    else
    { printf("%d is not a Palindrome \n",temp); } 
}
