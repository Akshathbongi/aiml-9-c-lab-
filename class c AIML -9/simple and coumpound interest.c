#include<stdio.h>
#include<math.h>
int main(){
    float p,t,r,si,ci;
    printf("enter principal amount (p): ");
    scanf("%f",&p);
    printf("enter time in year(t): ");
    scanf("%f",&t);
    printf("enter rate in percentage(r): ");
    scanf("%f",&r);
    si = (p*t*r)/100.0;//calculating simple interest
    ci = p*(pow(1+r/100,t)-1);
    printf("simple interest = %.3f\n",si);
    printf("simple interest = %.3f\n",ci);
    return 0;
    

}