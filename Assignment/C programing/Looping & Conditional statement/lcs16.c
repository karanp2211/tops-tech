//Calculate the Sum of Natural Numbers Using the While Loop
#include <stdio.h>
int main() {
    int n, sum = 0, i = 1;
    printf("Enter the number of natural numbers to sum: ");
    scanf("%d", &n);
    while (i <= n) {
        sum += i;
        i++; 
    }
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
}
