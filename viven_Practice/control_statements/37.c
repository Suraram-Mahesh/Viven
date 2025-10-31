// 37.WRITE A PROGRAM IN C TO PRINT THE ARMSTRONG NUMBERS BETWEEN 1 AND 1000 USING A FOR LOOP?

#include<stdio.h>
void main()
{
  printf("Armstrong Numbers from 1 to 1000 \n");
  int num;
  for(num=1;num<=1000;num++)
  { 
    int temp=num;
    int sum=0;
    while(temp!=0)
    {
      int digit=temp%10;
      sum=sum+(digit*digit*digit);
      temp=temp/10;
    }
    if(sum==num)
    {
      printf("The number %d is Armstrong Number \n",num);
    }
  }
}
