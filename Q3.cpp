#include<stdio.h>
int main()

{
	float p = 3.14;
	
    float radius,area,height,width,base;
    printf("Area of circle");
    printf("\nPlease Enter Radius ::~>");
    scanf("%f",&radius);
    area = p * radius * radius;
    printf("Area of Cricle is ::~>%f\n",area);
    
    printf("Area of rectangle");
 	printf("\n\nPlease Enter height ::~>");
    scanf("%f",&height);
    printf("Please Enter width::~>");
    scanf("%f",&width);
    area = height * width;
    printf("Area of rectangle is ::~>%f",area);
    
    printf("Area of Tringle\n");
 	printf("\n\nPlease Enter height::~>");
    scanf("%f",&height);
    printf("Please Enter base ::~>");
    scanf("%f",&base);
    area = (height * base)/2;
    printf("Area of traingle is ::~>%f",area);
    
    return 0;
}