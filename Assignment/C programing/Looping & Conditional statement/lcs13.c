//calculate the Factorial of a Given Number using while loop
#include <stdio.h>
int main() {
    int n ,i=1,factorial = 1; 
    printf("Enter number: ");
    scanf("%d", &n);
        while (i <= n) {
            factorial =factorial*i;
            i++;
        }
        printf("Factorial of :%d", factorial);
}
