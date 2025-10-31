// 35.WRITE A C PROGRAM TO FIND THE LCM OF TWO NUMBERS USING A FOR LOOP?

#include<stdio.h>
void main()
{
  int a,b;
  printf("Enter values of A and B : ");
  scanf("%d %d",&a,&b);
  int x=a;
  int y=b;
  int r;
  while(b!=0)
  {
    r=a%b;
    a=b;
    b=r;
  }
  int gcd=a;
  int lcm= (x*y)/gcd;
  printf("GCD is : %d \n",gcd);  
  printf("LCM is : %d \n",lcm);
  
}
