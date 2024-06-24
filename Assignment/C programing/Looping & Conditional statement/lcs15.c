//.Calculate sum of 10 numbers using of while loop
#include <stdio.h>
int main() {
    int numbers[10];
    int sum = 0;
    int i = 0;
    printf("Enter 10 numbers:\n");
    while (i < 10) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
        i++; 
    }
    printf("The sum of the 10 numbers is: %d\n", sum);
}
