//25.WRITE A C PROGRAM TO FIND THE SUM OF ELEMENTS IN AN ARRAY USING A WHILE LOOP?

#include<stdio.h>
int main()
{
  int n;
  printf("ENter number of elements : ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("Enter element %d : ",i);
    scanf("%d",&arr[i]);
  }
  int sum=0;
  int i=0;
  while(i<n)
  { 
    sum =sum + arr[i];
    i++;   
  }
  printf("Sum of Elements of Array : %d \n",sum);
}
