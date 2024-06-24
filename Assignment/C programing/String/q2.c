//Write a program in C to separate individual characters from a string.
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int len=0;
    printf("enter name:");
    scanf("%s",&str);
    printf("\nseperate individual character: ");
    while(str[len]!='\0'){
        printf("%c",str[len]);
        len++;
    }
    printf("\n");
}