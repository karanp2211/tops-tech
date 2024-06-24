//WAP to accept 5 numbers from user and display all numbers.
#include <stdio.h>
int main() {
    int num[5],i; 
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter number:");
        scanf("%d", &num[i]);
    }
    for(i = 0; i < 5; i++) {
        printf("Entered number are:  %d \n ",num[i]);
}
}