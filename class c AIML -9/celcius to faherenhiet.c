#include<stdio.h>
int main(){
    float a,b;
    printf("enter the temperture in celsius: ");
    scanf("%f",&a);
    b = (a*1.8)+ 32;
    printf("temperature in faherenhiet is: %.1f",b);
    return 0;

}