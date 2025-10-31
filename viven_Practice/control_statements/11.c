//11.WRITE A C PROGRAM TO ENTER WEEK NUMBER AND PRINT DAY OF WEEK?

#include<stdio.h>
int main()
{
  while(1){
  int num;
  printf("Enter the Week Number : ");
  scanf("%d",&num);
  
  switch(num){
  case 1 : printf("Entered Num is %d and Week is Monday \n",num);break;
  case 2 : printf("Entered Num is %d and Week is Tuesday \n",num);break;
  case 3 : printf("Entered Num is %d and Week is Wednesday \n",num);break;
  case 4 : printf("Entered Num is %d and Week is Thursday \n",num);break;
  case 5 : printf("Entered Num is %d and Week is Friday \n",num);break;
  case 6 : printf("Entered Num is %d and Week is Saturday \n",num);break;
  case 7 : printf("Entered Num is %d and Week is Sunday \n",num);break;
  default :printf("Enter value between 1 & 7\n");break;
  }  
}
}
