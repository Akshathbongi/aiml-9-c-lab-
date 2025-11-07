#include<stdio.h>
#include<string.h>
int main(){
    char ch;
    char s[24]; char sen[100];
    scanf("%c %s ",&ch,&s);
    getchar();
    scanf(" %[^\n]%*c",sen);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;

}