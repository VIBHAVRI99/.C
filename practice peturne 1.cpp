#include <stdio.h>

int main()

{
	int i,j,d;
	printf("entert the value");
	scanf("%i",&d);
	
	for(i=d;i>=1;i--)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
			
		}
		printf("\n");
	}
	
	return 0;
}
