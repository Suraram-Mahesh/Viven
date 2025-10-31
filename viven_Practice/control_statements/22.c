//22.WRITE A C PROGRAM TO FIND THE LARGEST ELEMENT IN AN ARRAY USING A FOR LOOP?

#include<stdio.h>
int main()
{
  int largest;
  int arr[]={1,3,5,6,8,9,4,15,2};
  int n=(sizeof(arr)/sizeof(arr[0]));
  largest = arr[0];
  for (int i = 1; i < n; ++i) {
        largest = (arr[i] > largest) ? arr[i] : largest;
    }

  printf("%d \n",n);
  printf("The largest in Array is %d \n",largest);
}



