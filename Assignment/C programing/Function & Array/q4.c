//WAP to find factorial using recursion.
#include<stdio.h>
int fact(int n){     // function defenation
    if(n == 1){
        return 1;
    }
    else{
        return n*fact(n-1);  // function calling itself
    }
}
int main(){
    int num,res;
    printf("enter number:");
    scanf("%d",&num);
    res=fact(num);
    printf("the factorial number is:%d",res);   //function call
}