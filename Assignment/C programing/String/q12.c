//Write a program in C to find the number of times a given word 'is' appears in the given string.
#include <stdio.h>
#include<string.h>
int main() {
    char inputString[100]; 
    char *word = "is";
    int count = 0;
    printf("Enter a string: ");
    scanf("%s",&inputString); 
    for (int i = 0; inputString[i]; i++) {
        if (inputString[i] >= 'A' && inputString[i] <= 'Z') {
            inputString[i] += 32; 
        }
    }
    for (int i = 0; inputString[i]; i++) {
        if (inputString[i] == 'i' && inputString[i + 1] == 's') {
            count++;
        }
    }
    printf("Number of times 'is' appears: %d\n", count);
}
