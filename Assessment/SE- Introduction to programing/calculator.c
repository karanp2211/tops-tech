// Create menu driven calculator using function

#include <stdio.h>

int main() {

    int choice;
    int num1, num2, result;

    printf("------------------ MENU ------------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n");

    if(choice >= 1 && choice <= 4){
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2); 
    }

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Addition = %d\n", result); 
            break;

        case 2:
            result = num1 - num2;
            printf("Subtraction = %d\n", result); 
            break;

        case 3:
            result = num1 * num2;
            printf("Multiplication = %d\n", result); 
            break;

        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Division = %d\n", result); 
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid choice !!!!\n");
            break;
    }
    printf("------------------------------------------\n");
}