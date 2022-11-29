#include<stdio.h>
int main ()

{
	int a,b;
	printf("Plaease Enter Value1\n");
	scanf("%i",&a);
	printf("Please Enter Value2\n");
	scanf("%i",&b);
	
	printf("Addition");
	printf("\n");
	printf("%i", a+b);



    printf("\n");
	    
	
	printf("Substraction");
	printf("\n");
	printf("%i", b-a);
	
	
	printf("\n");
	    
	
	printf("multiplication");
	printf("\n");
	printf("%i", b*a);
	
	printf("\n");
		int c = b % a;
	int d = c* a;
	printf("modulo");
	printf("\n");
	printf("%i", b % a);
	    
	    printf("\n");

	printf("division");
	printf("\n");
	printf("%f", float(b)/float(a));
	
	
	return 0;
	
}