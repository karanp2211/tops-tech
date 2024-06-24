//WAP to find maximum number among 3 numbers using ternary operator.
#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
 (num1 > num2) && (num1 > num3) ? printf("num1 is greater.") : ((num2>num3)) ? printf("\nnum2 is greater."):printf("\nnum3 is greater.");
    }