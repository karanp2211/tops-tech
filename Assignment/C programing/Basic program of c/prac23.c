//WAP to calculate swap 2 numbers with using of multiplication and division.
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("\nBefore swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    if (num1 != 0 && num2 != 0) { 
        num1 = num1 * num2;
        num2 = num1 / num2;
        num1 = num1 / num2;
    }
    printf("\nAfter swapping with multiplication and division:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
}
