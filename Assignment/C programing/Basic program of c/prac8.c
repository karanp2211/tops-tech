//Find circumference of Rectangle formula : C = 4 * a
#include <stdio.h>
int main() {
    double length, width, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);
    perimeter = 2 * (length + width);
     printf("The perimeter of the rectangle is: %.2f\n", perimeter);
}
