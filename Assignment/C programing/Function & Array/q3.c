//WAP to find reverse of string using recursion.
#include<stdio.h>
int rev(char *str){
    if (*str){
        rev (str+1);
        printf("%c",*str);
    }
}
int main(){
    char str[]="HELLO";
    rev(str);
}
