//16.WRITE A C PROGRAM TO CALCULATE THE SUM OF NUMBERS FROM 1 TO 100 USING A WHILE LOOP?
#include<stdio.h>
int main(){
  int i=0,sum=0;
  while(i<=100){
    sum = sum +i;
    i++;
  }
  printf("The Sum of 1 to 100 is %d\n",sum);
}
