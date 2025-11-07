#include<stdio.h>
int main(){
    int a,b,c,d; float e,f,g,h;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%f",&e);
    scanf("%f",&f);
    c= a+b;
    d = a-b;
    g = e+f;
    h = e-f;
    printf("%d %d\n",c,d);
    printf("%.1f %.1f",g,h);
    return 0;

}