//WAP of Addition, Subtraction, Multiplication and Division using Switch case.
#include<stdio.h>
int main(){
    int num1,num2;
    char choice;
    printf("enter your choice:");
    printf("\n a='+'\n b='-'\n c='*'\n d='/'\n");
    scanf("%c",&choice);
    printf("enter 2 numbers:\n");
    scanf("%d %d",&num1,&num2);
    switch(choice){
        case'1':
        printf("\n%d+%d=%d",num1,num2,(num1+num2));
        break;
        case'2':
        printf("\n%d-%d=%d",num1,num2,(num1-num2));
        break;
        case'3':
        printf("\n%d*%d=%d",num1,num2,(num1*num2));
        break;
        case'4':
        printf("\n%d/%d=%d",num1,num2,(num1/num2));
        break;
        default:
        printf("\n invalid choice:");
        break;
    }
}