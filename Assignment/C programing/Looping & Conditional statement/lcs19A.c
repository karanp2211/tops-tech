//A
//B C
//D E F
//G H I J
//K L M N O
#include<stdio.h>
int main(){
    int row,col;
    char ch='A';
    for(row=0;row<5;row++){
        for(col=0;col<=row;col++){
            printf("%c",ch++);
    }
    printf("\n");
    }
}