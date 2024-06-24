//Accept number of students from user. I need to give 5 apples to each student. How many apples are required?
#include <stdio.h>
int main() {
    int numberOfStudents, totalApples;
    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);
    totalApples = 5 * numberOfStudents;
    printf("Total number of apples required: %d\n", totalApples);
}
