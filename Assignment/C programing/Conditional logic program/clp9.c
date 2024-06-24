//C Program to Check Uppercase or Lowercase or Digit or Special Character.
#include <stdio.h>
int main() {
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if((ch >= 'A') && (ch <= 'Z')){
        printf("It is uppercase.");
    }
    else if((ch >= 'a') && (ch <= 'z')){
        printf("It is lowercase.");
    }
    else if((ch >= '0') && (ch <= '9')){
        printf("It is digit.");
    }
    else {
        printf("It is special number.");
    }
}