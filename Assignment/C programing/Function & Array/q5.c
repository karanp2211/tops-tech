//WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice.
#include<stdio.h>
int main(){
    int i,j,temp,arr[7];
    for(i=0;i<7;i++){
    printf("enter number:");    
    scanf("%d",&arr[i]);
    }
    printf("before sorting array:\n");
    for(i=0;i<7;i++){
        printf("%d \t",arr[i]);
    }
    for(i=0;i<7;i++){
        for(j=0;j<i;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n After sorting array:\n");
    for(i=0;i<7;i++){
    printf("%d \t",arr[i]);
    }
}    