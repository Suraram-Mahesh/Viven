// 38.WRITE A PROGRAM IN C TO IMPLEMENT A SIMPLE CALCULATOR USING SWITCH-CASE STATEMENTS?
#include<stdio.h>
void main()
{ 
  int a,b;
  char ch;
  printf(" \t Calculator Program \t \n");
  printf("Enter the values A & B : ");
  scanf("%d %d",&a,&b);
  printf("Enter the sign of Operation : ");
  scanf(" %c",&ch);
  
  switch(ch)
  {
    case '+': printf("%d %c %d = %d \n",a,ch,b,a+b);break;
    case '-': printf("%d %c %d = %d \n",a,ch,b,a-b);break;
    case '*': printf("%d %c %d = %d \n",a,ch,b,a*b);break;
    case '/': printf("%d %c %d = %d \n",a,ch,b,a/b);break;
    

  }
}
