//Write a program in C to find the largest and smallest words in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char word[20], max[20], min[20], c;
    int i = 0, j = 0;
    printf("Enter a string: ");
    scanf("%s", &str);
    str[strlen(str)] = ' ';
    str[strlen(str) + 1] = '\0';
    max[0] = '\0';
    min[0] = '\0';
    for (i = 0; i < strlen(str); i++) {
        c = str[i];
        if (c != ' ') {
            word[j++] = c;
        } else {
            word[j] = '\0'; 
            if (j > 0) { 
                if (strlen(max) == 0 || strlen(word) > strlen(max)) {
                    strcpy(max, word);
                }
                if (strlen(min) == 0 || strlen(word) < strlen(min)) {
                    strcpy(min, word);
                }
            }
            j = 0; 
        }
    }
    printf("Largest Word: %s\n", max);
    printf("Smallest Word: %s\n", min);
}