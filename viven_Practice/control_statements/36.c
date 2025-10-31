//36.WRITE A C PROGRAM TO PRINT THE MULTIPLICATION TABLE OF A GIVEN NUMBER USING A FOR LOOP?
#include<stdio.h>
void main()
{ 
  int num;
  printf("Enter the Number : ");
  scanf("%d",&num);
  int i;
  for(i=1;i<=10;i++)
  {
    printf("%d X %d = %d \n",num,i,num*i);
  }

}
