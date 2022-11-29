#include <stdio.h>

int main() 

{

  int  a=20,b=30;
  printf("\n");
  printf("Enter an operator (+, -, *, /)");
  scanf("%i", &a,b);
  printf("Enter two operands: ");
  scanf("%i %i", &a, &b);

  
  {
    printf("Addition (+) ");
    printf("%i,a+b");
    printf("\n");
    printf("substraction (-) ");
    printf("%i,a-b");
    printf("\n");
    printf("multiplication (*) ");
    printf("%i,a*b");
    printf("\n");
    printf("Division (/) ");
    printf("%i,a/b");
    printf("\n");
    

  }

  return 0;
}
