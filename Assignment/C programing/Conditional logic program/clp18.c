//Write a C program to calculate profit and loss on a transaction.
#include <stdio.h>
int main() {
    float costPrice, sellingPrice, result;
    printf("Enter cost price: ");
    scanf("%f", &costPrice);
    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);
    if(sellingPrice > costPrice) {
        result = sellingPrice - costPrice;
        printf("Profit = %.2f\n", result);
    } else if(costPrice > sellingPrice) {
        result = costPrice - sellingPrice;
        printf("Loss = %.2f\n", result);
    } else {
        printf("No profit, no loss.\n");
    }
}
