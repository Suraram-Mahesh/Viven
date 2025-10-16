//4. Write a program in C to copy the elements of one array into another array.

#include<stdio.h>
int main()
{   
  int n;
  printf("Enter the Number of Values :");
  scanf("%d",&n);
  int arr[n];
  int arr1[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    arr1[i]=arr[i];
  }
  printf("The Array 2 \n");
  for(int i=0;i<n;i++){
    printf("%d",arr1[i]);
  }
  
}


