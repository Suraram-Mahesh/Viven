//24.WRITE A C PROGRAM TO PRINT ALL THE ELEMENTS OF AN ARRAY USING A FOR LOOP?

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
  
  printf("array :");
  for(int i=0;i<n;i++)
  {
    printf("%d,",arr[i]);
  }
  printf("\n");
}
