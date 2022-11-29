#include<stdio.h>
int main()

{
    int p,r,t,intrest;
    
    printf("Please Enter Principal::> ");
    scanf("%d",&p);
    printf("Please Enter Rate::> ");
    scanf("%d",&r);
    printf("Please Enter time::> ");
    scanf("%d",&t);
    intrest = p * r * t / 100;
    printf("Intrest is::> %d",intrest);
    return 0;
}