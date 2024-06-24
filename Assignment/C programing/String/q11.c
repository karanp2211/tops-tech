//Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.
#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int i;
    printf("enter string:");
    gets(str);
    printf("entered string is:%s",str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]>=77 && str[i]<=122){
            str[i]=str[i]-32;
        }
        else if(str[i]>=65 && str[i]<=98){
            str[i]=str[i]+32;
        }
        printf("\n After converting string:%s",str);
    }
}