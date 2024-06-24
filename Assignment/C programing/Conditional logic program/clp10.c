//WAP to check whether a number is negative, positive or zero.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num > 0) {
        printf("The number is positive.\n");
    } else if(num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
}
