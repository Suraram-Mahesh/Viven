//10.WRITE A C PROGRAM TO FIND MINIMUM OR MAXIMUM BETWEEN TWO NUMBERS?

#include<stdio.h>
int main(){
  
  while(1){
  
  int a,b;
  
  printf("Enter the Value of A : ");
  scanf("%d",&a);
  printf("Enter the Value of B : ");
  scanf("%d",&b);
  (a>b)?printf("A is Maximum : %d and B is Minimum : %d \n",a,b):printf("A is Minimum : %d and B is Maximum : %d \n",a,b);
  
}}
