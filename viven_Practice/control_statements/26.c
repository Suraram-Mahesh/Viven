//26.WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A GIVEN STRING USING A FOR LOOP?

#include<stdio.h>
int main()
{  
  char str[15];
  printf("Enter the String : ");
  scanf("%s",str);
  int count=0;
  for(int i =0 ;str[i]!='\0';i++)
  { 
    char ch=str[i];
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
    count++;
    }
  }
  printf("Entered string is : %s & Number of vowels in string are : %d vowels\n",str,count);
}

