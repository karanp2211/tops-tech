//C Program to Reverse a Number Using FOR Loop.
#include<stdio.h>
int main(){
    int num,rev=0,rem,temp;
    printf("Enter number:");
    scanf("%d",&num);
    printf("the original number:%d",num);
    temp=num;
    for(;temp!=0;temp/10){
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    printf("\n reverse number:%d",rev);
}