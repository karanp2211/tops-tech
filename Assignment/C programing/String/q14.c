//Write a program in C to combine two strings manually
#include<stdio.h>
int main(){
    char str1[50],str2[50],i,j;
    printf("enter string1:");
    scanf("%s",&str1);
    printf("enter string2:");
    scanf("%s",&str2);
    for(i=0;i!='\0';i++){
        for(j=0;j!='\0';j++,i++){
            str1[i]=str2[j];
        }  
    str1[i]='\0';
    }
    printf("\n combine string:%s",str1);
}