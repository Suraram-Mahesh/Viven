//20.WRITE A C PROGRAM TO PRINT FIBONACCI SERIES UP TO N TERMS USING A FOR LOOP?

#include<stdio.h>
int main()
{
  int n;
  int a=0,b=1; //initialising first and second terms
  printf("Enter Number of N terms : ");
  scanf("%d",&n);
  printf("Fibonacci Series : %d , %d ,",a,b);
  int next=a+b; // initialisation of third term
  // for printing 3 rd to N terms
  for(int i=3;i<=n;++i)
  {
    printf(" %d , ",next);
    a=b;
    b=next;
    next = a+b;
  }
}
