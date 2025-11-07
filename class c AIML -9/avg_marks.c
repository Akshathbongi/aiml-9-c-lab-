#include<stdio.h>
int main(){
    int english,maths,science,psycology,history,total;
    float avg ;
    printf("enter thye marks of english,maths,science,psycology and history: ");
    scanf("%d %d %d %d %d",&english,&maths,&science,&psycology,&history);
    total = english + maths + science + history + psycology;
    avg = total / 5.0;
    printf("total marks of the student: %d \n",total);
    printf("average marks of the student: %.2f",avg);
    return 0;

}