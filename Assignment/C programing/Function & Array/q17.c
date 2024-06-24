//Accept 5 numbers from user and perform sum of array
#include<stdio.h>
int main(){
    int i,arr[5],sum=0;
    printf("enter 5 number:");
    for(i=0;i<5;i++){ 
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        sum+=arr[i];
    }
    printf("\n Sum of 5 numbers:%d\n",sum);
}