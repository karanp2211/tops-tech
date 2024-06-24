//Write a program in C to find the maximum number of characters in a string.
#include<stdio.h>
int main(){
    char str[50];
    int count=0;
    printf("enter string:");
    scanf("%s",&str);
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    printf("\n the maximun number of character in string:%d",count);
}