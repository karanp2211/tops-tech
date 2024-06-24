//WAP to reverse a string and check that the string is palindrome or not.
#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20];
    printf("enter string:");
    gets(str1);
    printf("\n reverse string of s2:%s",strrev(str1));
    printf("\n string copy:%s",strcpy(str2,str1));
    if(str1==str2){
        printf("\n string is palindrome.");
    }
    else{
        printf("\n string is not palindrome.");
    }
}