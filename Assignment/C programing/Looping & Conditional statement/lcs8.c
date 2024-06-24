//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)
#include <stdio.h>
int main() {
    int i,a[4],max=0;
    printf("enter number:");
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("number is maximum:%d",max);
}    