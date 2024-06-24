//Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main(){
    int str1[10],str2[10],str3[10];
    printf("ENTER STRING 1:");
    gets(str1);
    printf("ENTER STRING 2:");
    gets(str2);
    printf("\n copying string1 in string3:%s",strcpy(str3,str1));
}