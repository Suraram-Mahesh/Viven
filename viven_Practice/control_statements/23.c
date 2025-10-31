//23.WRITE A C PROGRAM TO FIND THE SMALLEST ELEMENT IN AN ARRAY USING A WHILE LOOP?

#include<stdio.h>
int main(){
  
  int smallest,i,n;
  printf("Enter The Number of elements : ");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
    printf("Enter Element %d : ",i);
    scanf("%d",&arr[i]);
  }
  
  smallest=arr[0];
  i=1;
  
  while(i<n)
  {
    if(arr[i]<smallest)
    {
      smallest=arr[i];
    }
  i++;
  }
printf("The smallest element in array is %d \n",smallest);
}
