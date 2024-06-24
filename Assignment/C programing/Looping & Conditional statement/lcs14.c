//Accept 5 numbers from user and find those numbers factorials.
#include <stdio.h>
int main() {
    int numbers[5],i;
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 5; ++i) {
       int fact = factorial(numbers[i]);
        if (fact != 0) {
            printf("Factorial of %d \n", numbers[i], fact);
        } else {
            printf("Error! Factorial of a negative number (%d) doesn't exist.\n", numbers[i]);
        }
    }
}

