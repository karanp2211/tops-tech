//Accept monthly salary from the user and deduct 10% insurance premium,10% loan installment find out of remaining salary.
#include <stdio.h>
int main() {
    float monthlySalary, insurancePremium, loanInstallment, remainingSalary;
    printf("Enter your monthly salary: ");
    scanf("%f", &monthlySalary);
    insurancePremium = monthlySalary * 0.10;
    loanInstallment = monthlySalary * 0.10;
    remainingSalary = monthlySalary - insurancePremium - loanInstallment;
    printf("Your remaining salary after deductions is: %.2f\n", remainingSalary);
}
