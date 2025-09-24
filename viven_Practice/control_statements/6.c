//6.WRITE A C PROGRAM TO READ THE VALUE OF AN INTEGER M AND DISPLAY THE VALUE OF N IS 1 WHEN M IS LARGER THAN 0, 0 WHEN M IS 0 AND -1 WHEN M IS LESS THAN 0.

#include<stdio.h>
int main(){
	
	while (1){
	int m,n;
	printf("Enter the Value of M :");
	scanf("%d",&m);
	
	if(m>0)
	{n=1;}

	else if(m==0)
	{n=0;}

	else if(m<0)
	{n=-1;}	
	
	printf("Value of M is %d and value of N is %d\n",m,n);

	}

}
