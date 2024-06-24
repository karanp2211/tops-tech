//Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
int main(){
    int i,j,temp,arr[5]={5,3,66,7,8};
    printf("\n before sorting array:\n");
    for(i=0;i<5;i++){
        printf("%d \t",arr[i]);
    }
    for(i=0;i<5;i++){
        for(j=0;j<i;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nAfter sorting array:\n");
    for(i=0;i<5;i++){
    printf("%d \t",arr[i]);
    }
}    
