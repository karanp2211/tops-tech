//Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include <stdio.h>
int main() {
    int num, sum = 0,rem,temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp=num;
    while (temp > 0) {
        rem = temp % 10; 
        sum = sum + rem; 
        temp = temp / 10; 
    }
    printf("number of sum: %d", sum);
}
