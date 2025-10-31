// 34.WRITE A C PROGRAM TO FIND THE GCD OF TWO NUMBERS USING A WHILE LOOP?

#include<stdio.h>
void main()
{
  int a,b,r;
  printf("Enter values of A and B : ");
  scanf("%d %d",&a,&b);
  while(b!=0)
  {
    r=a%b;
    a=b;
    b=r;
  }
  printf("GCD of Two Numbers : %d\n",a);
}
