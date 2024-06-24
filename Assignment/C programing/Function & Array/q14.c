//WAP to accept 5 numbers from user and check entered number is even or odd using of array
#include<stdio.h>
int main(){
    int i,array[5];
       printf("\n enter 5 number:");
    for(i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
        printf("\n check entered number is even or odd:");
        for(i=1;i<=5;i++){
        if(array[i]%2==0){
        printf("\n the number is even.",array[i]);
        }
        else{
        printf("\n the number is odd.",array[i]);
        }
    }
}