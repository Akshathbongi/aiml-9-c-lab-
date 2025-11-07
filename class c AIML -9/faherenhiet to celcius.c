#include<stdio.h>
int main(){
    float a,b;
    printf("enter the temperture in faherenhiet: ");
    scanf("%f",&a);
    b = (a-32)*(0.55);
    printf("temperature in celsius is: %.1f",b);
    return 0;

}
