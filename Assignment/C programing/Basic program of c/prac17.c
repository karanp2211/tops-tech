//Calculate person’s insurance premium based on salary.
#include <stdio.h>
int main() {
    float monthlySalary, insurancePremium;
    float premiumRate = 0.05; // 5% premium rate
    printf("Enter your monthly salary: ");
    scanf("%f", &monthlySalary);
    insurancePremium = monthlySalary * premiumRate;
    printf("Your insurance premium is: %.2f\n", insurancePremium);
}
