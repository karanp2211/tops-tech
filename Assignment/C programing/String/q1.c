//Write a program in C to find the length of a string without using library functions.
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i,len=0;
    printf("\n input string:");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++){
        len++;
    }
    printf("\n total lenght of input string:%d",len);
}