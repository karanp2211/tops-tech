//WAP to print table up to given numbers
#include <stdio.h>
int main() {
    int i, j,n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("\nMultiplication table for %d:\n", i);
        for(j = 1; j <= 10; j++) {
            printf("%d * %d = %d\n", i, j, i*j);
        }
    }
}
