//Write a program in C to extract a substring from a given string.
#include<stdio.h>
#include<string.h>
int main(){
    char s[20],s1[30];
    printf("enter string:");
    scanf("%s",&s);
    printf("enter substring:");
    scanf("%s",&s1);
    printf("\n entered string is:%s",s);
    printf("\n After extract a substring:%s",strstr(s,s1));
}