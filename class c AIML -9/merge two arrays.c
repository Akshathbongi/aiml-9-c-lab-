#include <stdio.h>

int main() {
    int n1, n2, arr1[100], arr2[100], merge[200];

    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    for (int i = 0; i < n1; i++) merge[i] = arr1[i];
    for (int i = 0; i < n2; i++) merge[n1 + i] = arr2[i];

    printf("Merged array:\n");
    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", merge[i]);

    return 0;
}
