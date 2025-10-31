// 40.WRITE A PROGRAM IN C TO FIND THE SUM OF ELEMENTS IN THE LOWER TRIANGULAR MATRIX USING LOOPS AND IF-ELSE STATEMENTS?

#include<stdio.h>
void main()
{ 
  int n;
  int mat[10][10];
  printf("Enter the Size of Square Matrix : ");
  scanf("%d",&n);
  int i,j,sum=0;
  for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
      {
        scanf("%d",&mat[i][j]);
      }
    }
  
  for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
      {
        if(i>=j)
          {
            sum=sum+mat[i][j];
          }
      }
    }
  printf("Sum of Elements of Lower Triangle : %d \n",sum);
}
