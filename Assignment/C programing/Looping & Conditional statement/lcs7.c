//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include <stdio.h>
int main() {
    int num, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0) {
        rev = rev * 10;
        rev = rev + num % 10;
        num = num / 10;
    }
    printf("Reversed number: %d", rev);
}
