// 33.WRITE A C PROGRAM TO FIND THE FACTORIAL OF A NUMBER USING A WHILE LOOP?

#include<stdio.h>
int main()
{ 
  int num,fact=1;
  printf("Enter the Number : ");
  scanf("%d",&num);
  
  if(num==0 || num==1)
  {
    printf("Factorial of %d is : 1 \n",num);
    return 0;
  }
  else
  {
    while(num!=0)
    { 
      fact=fact*num;
      num--;
    }
    printf("The Factorial is : %d \n",fact);
  }
}
