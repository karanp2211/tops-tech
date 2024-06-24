//WAP to print factorial of given number.
#include<stdio.h>
 int main(){
    int num,i,fact=1;
    printf("enter number:");
    scanf("%d",&num);
    i=1;
    while(i<=num){
    fact=fact*i;
    i++;
    }
    printf("the factorial number is given %d=%d",num,fact);
}