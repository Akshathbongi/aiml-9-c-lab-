#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.14
int main()
{
    //declare variables
    float u,a,d;
    int t;
    printf("Enter the value of acceleration:");
    scanf("%f",&a);
    printf("Enter the value of initial velocity:");
    scanf("%f",&u);
    printf("Enter the value of time:");
    scanf("%d",&t);
    d=(u*t)+(a*t*t)/2;
    printf("The distancce:%.2f",d);
    return 0;
}