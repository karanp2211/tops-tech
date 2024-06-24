//Accept 5 employees name and salary and count average and total salary
#include <stdio.h>
int main() {
    char names[5][50]; 
    float salaries[5]; 
    float totalSalary = 0, averageSalary;
    int i;
    for(i = 0; i < 5; i++) {
        printf("Enter name of employee %d: ", i+1);
        scanf("%s", names[i]); // Reading a string (name)
        printf("Enter salary of %s: ", names[i]);
        scanf("%f", &salaries[i]); // Reading a float (salary)
        totalSalary += salaries[i]; // Adding to total salary
    }
    averageSalary = totalSalary / 5;
    printf("\nTotal salary of 5 employees: %.2f\n", totalSalary);
    printf("Average salary of 5 employees: %.2f\n", averageSalary);
}
