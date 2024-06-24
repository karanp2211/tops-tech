//WAP to accept 5 students name and store it in array.
#include<stdio.h>
int main(){
    int i;
    char arr[5][20];
    printf("enter 5 names:");
    for(i=0;i<5;i++){
        scanf("%s",&arr[i]);
    }
    printf("\n List of names:\n");
    for(i=0;i<5;i++){
        printf("%s\n",arr[i]);
    }
}