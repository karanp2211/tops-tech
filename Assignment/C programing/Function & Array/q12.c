//WAP to accept 5 numbers from user and display in reverse order using for loop and array.
#include<stdio.h>
int main(){
    int i,array[5];
       printf("enter 5 number:");
    for(i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
        printf("\n number in reverse order:");
        for(i=4;i>=0;i--){
            printf("%d",array[i]);
    }
}