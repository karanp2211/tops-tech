//Write a C program to accept two integers and check whether they are equal or not
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);
    if (num1 == num2) {
        printf("The numbers are equal.\n");
    } else {
        printf("The numbers are not equal.\n");
    }
}


