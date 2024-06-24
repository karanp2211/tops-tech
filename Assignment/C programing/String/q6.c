//Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
int main(){
    char str[50];
    int i,alpha,digit,sc;
    printf("enter string:");
    scanf("%s",&str);
    alpha=digit=sc=0;
    for(i=0;str[i]!='\0';i++){
        if((str[i]>= 'a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            alpha++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            digit++;
        }
        else{
            sc++;
        }
    }
    printf("\n total number of alphabets:%d",alpha);
    printf("\n total number of digits:%d",digit);
    printf("\n total number of special character:%d",sc);
}