//Write a program to find out the max number from given array using function.
#include <stdio.h>
int largest(int arr[]){
    int i;
   int max = arr[0];
    for (i = 0; i < 5; i++){
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main(){
    int num[10],i;
    int arr[5] = {10, 32, 45, 90, 98};
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    largest(arr);
    printf("\n Largest in given array is: %d",largest(arr));
}
