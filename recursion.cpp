#include<stdio.h>
int recursion(int x)
{
	if(x>=1)
	{
		printf("Hello\n");
		recursion(x-1);
	}	
}

int main()
{
	
	recursion(5);
	return 0;
}