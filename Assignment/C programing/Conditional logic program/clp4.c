//WAP to make simple calculator (operation include Addition, Subtraction,
//Multiplication, Division, modulo) using conditional statement.
#include <stdio.h>
int main()
{
    int num1, num2;
    char operator;
    printf("Enter the operator(+,-,*,/)");
    scanf("%c",&operator);
    printf("Enter Number 1\n");
    scanf("%d", &num1);
    printf("Enter Number 2\n");
    scanf("%d", &num2);
    switch(operator){
        case'+':
        printf("the addition is:%d",num1+num2);
        break;
        case'-':
        printf("the substruction is:%d",num1-num2);
        break;
        case'*':
        printf("the multiplication is:%d",num1*num2);
        break;
        case'/':
        printf("the division is:%d",num1/num2);
        break;
        default:
        printf("its a consistant.");
        break;
    }
}
        

    