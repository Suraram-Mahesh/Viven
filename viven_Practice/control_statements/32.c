// 32.WRITE A C PROGRAM TO FIND THE POWER OF A NUMBER USING A FOR LOOP?

#include<stdio.h>
void main()
{ 
  int num,exp; 
  printf("Enter the Base Value : ");
  scanf("%d",&num);
  
  printf("\nEnter Exponential Value : ");
  scanf("%d",&exp);
 
  int i,pow=1;
  for(i=1;i<=exp;i++)
  {
    pow=pow*num;
  }
  printf("The Power of Number is : %d \n",pow );
}
