//9.WRITE A C PROGRAM TO CHECK WHETHER A CHARACTER IS AN ALPHABET OR NOT?

#include<stdio.h>
#include<ctype.h>
int main(){
  while (1){
    char a;
    printf("Enter the Character: ");
    scanf(" %c",&a);
    a=tolower(a);
    if(a<='z' && a>='a'){
      
      printf("The Letter is alphabet %c\n",a);
      
    }
    else
      { printf("The letter is not Alphabtet\n");  }

}
}
