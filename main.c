#include <stdio.h>

int main()
{ int x;
 printf("please enter the number");
    scanf("%d",&x);
  //if the number is even :
  if (x%2==0)
  {
      printf("''The number is odd=0''\n ''The number is even =1'' ");
  }
  // if the number is odd
    if (x%2==!0)
  {
      printf("''The number is odd=1''\n ''The number is even =0'' ");
  }
    return 0;
}
