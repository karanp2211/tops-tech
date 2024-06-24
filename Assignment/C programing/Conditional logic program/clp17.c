//Write a C program to check whether a triangle can be formed with the given values for the angles.
#include <stdio.h>
int main() {
    int angle1, angle2, angle3, sum;
    printf("Enter the three angles of a triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    sum = angle1 + angle2 + angle3;
    if(sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("Yes, a triangle can be formed with angles %d, %d, and %d.\n", angle1, angle2, angle3);
    } else {
        printf("No, a triangle cannot be formed with angles %d, %d, and %d.\n", angle1, angle2, angle3);
    }
}
