//18.WRITE A C PROGRAM TO CHECK WHETHER A GIVEN NUMBER IS PRIME OR NOT USING A WHILE LOOP?

#include<stdio.h>
#include<math.h>
int main()
{

while(1){
  int i,num,flg=1;
  printf("Enter a Number : ");
  scanf("%d",&num);
  printf("%f \n",sqrt(num));
  for (i=2;i<=sqrt(num);i++)
    {
      if(num%i==0)
      {
        printf("%d is not a prime \n",num);
        flg=0;
        break;
      }
    }
   if(flg==1)
   {
    printf("%d is prime \n",num);
   }
  }
}

// Use $gcc 18.c -lm   flag to compile
