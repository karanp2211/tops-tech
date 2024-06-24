//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<stdio.h>
int main(){
    int start,end=10,sum=0;
    for(start=1;start<=end;start++){
        for(int j=1;j<=start;j++){
        sum+=j;
        }
    }
    printf("this series:%d",sum);
}