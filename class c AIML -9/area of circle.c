#include<stdio.h>
#define pi 3.14
int main(){
    // circle
    float radius,area;
    printf("enter radius of circle (in cm): ");
    scanf("%f",&radius);
    area = pi*radius*radius;
    printf("area of circle = %.2f cm\n",area);
    
    return 0;
}
