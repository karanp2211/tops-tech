//WAP to convert years into days and days into years.
#include <stdio.h>
int main() {
    int yearsToDays, daysToYears;
    float days, years;
    printf("Enter years to convert to days: ");
    scanf("%f", &years);
    yearsToDays = years * 365; // Approximation
    printf("%.2f years is approximately %d days.\n", years, yearsToDays);
    printf("Enter days to convert to years: ");
    scanf("%f", &days);
    daysToYears = days / 365; // Approximation
    printf("%.2f days is approximately %d years.\n", days, daysToYears);
}
