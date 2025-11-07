#include<stdio.h>
int main(){
    float len,wid,area;
    printf("enter length and width of rectangle (in cm): ");
    scanf("%f %f",&len,&wid);
    area = len*wid;
    printf("area of rectanglr is = %.3f cm\n",area);
    return 0;
}