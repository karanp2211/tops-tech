//spiral pattern.
#include<stdio.h>
int main(){
    int size;
    printf("enter size:");
    scanf("%d",&size);
    int arr[size][size];
    int r1=0,c1=0,r2=size-1,c2=size-1,value=1;
    while(value<=size*size){
        for(int left=c1;left<=c2;left++){
            arr[r1][left]=value++;  
        }
        for(int right=r1+1;right<=r2;right++){
            arr[right][c2]=value++;
        }
        for(int left=c2-1;left>=c1;left--){
            arr[r2][left]=value++;
        }
        for(int right=r2-1;right>=r1+1;right--){
            arr[right][c1]=value++;
        }
        r1++;
        c1++;
        r2--;
        c2--;
    }
    printf("Printing pattern:\n");
    for(int left=0;left<size;left++){
        for(int right=0;right<size;right++){
            printf("%d\t",arr[left][right]);
        }
        printf("\n");
    }
}