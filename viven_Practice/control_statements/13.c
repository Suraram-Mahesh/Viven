//13.WRITE A C PROGRAM TO FIND NUMBER OF DAYS IN MONTH?
//

#include<stdio.h>
int main()
{
  int month,year;
  printf("Enter the Month Number : ");
  scanf("%d",&month);
  printf("Enter the Year : ");
  scanf("%d",&year);
  
  switch(month)
  {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: printf("31 Days Present in Month %d\n",month);break;
    
    case 4:
    case 6:
    case 9:
    case 11: printf("30 Days Present in Month %d\n",month);break;
    
    case 2 :
    {   
      if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        {printf("29 Days present in Month %d of Year %d",month,year);}
      else
      {printf("28 Days present in Month %d of Year %d",month,year);} 
    }
    break;
  }
}
