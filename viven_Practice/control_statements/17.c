//17.WRITE A C PROGRAM TO FIND THE FACTORIAL OF A GIVEN NUMBER USING A FOR LOOP?

#include<stdio.h>
int main()
{
  int fact=1,i=0,num=0;
  printf("Enter the Number for Factorial :");
  scanf("%d",&num); 
  
  if(num==1 || num==0)
  {
    printf("Factorial of %d is 1\n",num);
  }
  else if(num>1)
  {
      for(i=num;i>0;i--)
        {
          fact=fact*i;
        }
  printf("Factorial of %d is %d\n",num,fact);
  
  }
}
