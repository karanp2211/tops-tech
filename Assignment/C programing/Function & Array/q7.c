//WAP Find out length of string without using inbuilt function
#include<stdio.h>
#include<string.h>
int main(){
    int i,len=0;
    char str[10];
    printf("ENTER STRING 1:");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        len++;
    }
    printf("\n lenght of string is:%d",len);
}