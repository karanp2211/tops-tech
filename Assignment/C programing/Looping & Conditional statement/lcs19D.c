//1
//23
//456
//78910
//11 12 13 14 15
#include<stdio.h>
int main(){
    int row,col,num=1;
    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            printf("%d",num++);
    }
    printf("\n");
    }
}