//1. Write a program in C to store elements in an array and print them.    

#include<stdio.h>

int main()
{
	int n;
	printf("Enter Number of Array Elements :");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<=n;i++){
	    printf("Enter element %d : ",i);
	    scanf("%d",&arr[i]);   
	}
	for(int i=0;i<=n;i++){
	    printf("%d ",arr[i]);
	    //scanf("%d",&arr[i]);   
	}
}
