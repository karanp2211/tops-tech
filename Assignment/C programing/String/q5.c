//Write a program in C to compare two strings without using string library functions.
#include<stdio.h>
int main(){
    int i;
    int str1[20],str2[20];
    printf("enter string1:");
    gets(str1);
    printf("enter string1:");
    scanf(str2);
    for(i=0;str1[i]==str2[i] && str1 == '\0';i++){ }
    if(str1[i]<str2[i]){
        printf("string2 is greater than string1.");
    }
    else if(str1[i]>str2[i]){
        printf("string2 is less than string1.");
    }
    else{
        printf("both are equal.");
    }
}