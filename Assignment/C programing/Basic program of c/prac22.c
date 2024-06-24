//.Calculate compound interest (Compound Interest formula: a.Formula to calculate compound interest annually is given by:Amount= P(1 + R/100)t
// b. Compound Interest = Amount – P
#include <stdio.h>
#include <math.h> 
int main() {
    double P, R, t, Amount, CI;
    printf("Enter the principal amount (P): ");
    scanf("%lf", &P);

    printf("Enter the annual interest rate (R) in percentage: ");
    scanf("%lf", &R);

    printf("Enter the time (t) in years: ");
    scanf("%lf", &t);
    Amount = P * pow((1 + R / 100), t);
    CI = Amount - P;
    printf("Compound Interest: %.2f\n", CI);
}
