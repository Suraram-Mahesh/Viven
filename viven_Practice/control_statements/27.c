// 27.WRITE A C PROGRAM TO COUNT THE NUMBER OF WORDS IN A GIVEN STRING USING A WHILE LOOP?
/*
#include<stdio.h>
int main()
{
  char str[50];
  printf("Enter String : ");
  fgets(str,sizeof(str),stdin);
  printf("%s",str);
  int count=0;
  int i;
  while(str[i]!='\0')
  { 
    if ((str[i] != ' ' && str[i] != '\t') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
    {
    count++;
    i++;
    }
  }
  printf("Number of Words : %d",count);
}
*/
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, spaces = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read line including spaces

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            spaces++;
        }
        i++;
    }

    printf("Number of spaces: %d\n", spaces+1);

    return 0;
}

