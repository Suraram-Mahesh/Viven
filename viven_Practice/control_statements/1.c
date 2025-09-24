// 1.WRITE A C PROGRAM TO ACCEPT TWO INTEGERS AND CHECK WHETHER THEY ARE EQUAL OR NOT?

#include<stdio.h>
int main(){
  
  int a,b;
  printf("Enter the two integers : ");
  scanf("%d %d",&a,&b);
  if (a==b)
    printf("The entered Numbers are Equal.\n");
  else
    printf("The numbers are not Equal.\n");
}

