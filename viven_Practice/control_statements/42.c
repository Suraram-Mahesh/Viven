//42.WRITE A PROGRAM IN C TO REMOVE DUPLICATE ELEMENTS FROM AN ARRAY USING LOOPS AND IF-ELSE STATEMENTS?

#include<stdio.h>
void main()
{
    int i,j,k,n;
    int arr[10];
    printf("Enter the Size of Array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      printf("Enter element %d : ",i);
      scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
        if(arr[i]==arr[j])
        {
          for(k=j;k<n;k++)
          {
            arr[k]=arr[k+1];
          }
          j--;
          n--;
        }
      }
    }
    printf("Final Array : ");
    for(i=0;i<n;i++)
    {
      printf(" %d ",arr[i]);
    }

}


