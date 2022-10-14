#include <stdio.h>

int main()

{

    int i,j;

	for(i=0;i<=8;i++)//0+1
	{
		//printf("%i",i);
		
		for(j=0;j<i-3;j++)
		{
			printf(" *");//1+1
		}
		printf("\n");
	}
	return 0;
}


   
