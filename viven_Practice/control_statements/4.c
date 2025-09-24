// 4.WRITE A C PROGRAM TO FIND WHETHER A GIVEN YEAR IS A LEAP YEAR OR NOT?

#include<stdio.h>
int main(){

  while (1){
  int year;
  printf("Enter year : ");
  scanf("%d",&year);
    
  if(((year%400)==0)|| (year % 4 ==0 )&& (year%100 !=0))
  {
    printf("%d is a Leap year \n",year);
  }
  else
  { printf("%d is not a Leap year \n",year); }
  
}
}
