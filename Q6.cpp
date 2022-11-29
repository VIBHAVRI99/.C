#include<stdio.h>
int main()

{
	int day,year,weeks;
	
	
	printf("Please Enter Days::> ");
	scanf("%i",&day);
    year = day/365; 
    weeks = (day % 365)/7;
    day = day - ((year*365) + (weeks*7));
    day = day - ((weeks*7) +(year*365));

    printf("Years: %i\n", year);
    printf("Weeks: %f\n", weeks);
    printf("Days: %f \n", day);
	
	
    return 0;
}