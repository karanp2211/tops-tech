//WAP to perform Palindrome number using for loop and function.
#include<stdio.h>
int palindrome(int num){
    int rev=0,rem,temp;
    temp=num;
    for(;temp!=0;temp/10){
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    return num==rev;
}
int main(){
    int num;
    printf("\n enter number:");
    scanf("%d",&num);
    if(palindrome(num)){
    printf("\n the number is palindrome.");
    }
    else{
    printf("\n the number is not palindrome.");
    }
}