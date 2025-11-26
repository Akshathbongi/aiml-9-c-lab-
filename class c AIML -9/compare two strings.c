#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i = 0;

    gets(s1);
    gets(s2);

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            printf("Strings are NOT equal");
            return 0;
        }
        i++;
    }

    if (s1[i] == '\0' && s2[i] == '\0')
        printf("Strings are equal");
    else
        printf("Strings are NOT equal");

    return 0;
}
