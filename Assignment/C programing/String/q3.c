//Write a program in C to print individual characters of a string in reverse order
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int len=0;
    printf("enter name:");
    scanf("%s",&str);
    len=strlen(str);
    for(int i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
    printf("\n");
}