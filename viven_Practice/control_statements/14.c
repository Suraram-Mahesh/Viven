//14.WRITE A C PROGRAM TO FIND MAXIMUM BETWEEN TWO NUMBERS USING SWITCH CASE?
//

#include<stdio.h>

int main(){
  
  int a,b;
  printf("Enter the Value of A : ");
  scanf("%d",&a);
  printf("Enter the Value of B : ");
  scanf("%d",&b);
  int res=(a>b)-(a<b);
  switch(res){
  
    case -1 : printf("B is maximum %d\n",b);break;
    case 1: printf("A is maximum %d\n",a);break;
    case 0: printf("Both are Equal\n");break;
  
  }

}
