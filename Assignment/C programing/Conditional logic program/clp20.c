//If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe minimum bill should be of Rs. 256/-
#include <stdio.h>
int main() {
    float billAmount, finalBill, surcharge;
    printf("Enter the original bill amount: ");
    scanf("%f", &billAmount);
    if(billAmount > 800) {
        surcharge = billAmount * 0.18;
        finalBill = billAmount + surcharge;
    } else {
        finalBill = billAmount;
    }
    if(finalBill < 256) {
        finalBill = 256;
    }
    printf("The final bill amount is: Rs. %.2f\n", finalBill);
}
