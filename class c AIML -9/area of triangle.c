#include<stdio.h>
int main(){
    float b,h,area;
    printf("enter baase and height (in cm): ");
    scanf("%f %f",&b,&h);
    area = (0.5*b*h);
    printf("area of triangle = %.2f cm\n",area);
    return 0;
}