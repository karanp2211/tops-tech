//Find circumference of square formula : C = 4 * a
#include <stdio.h>
int main() {
    double side, perimeter;
    printf("Enter the length of the side of the square: ");
    scanf("%lf", &side);
    perimeter = 4 * side;
    printf("The perimeter (circumference) of the square is: %.2f\n", perimeter);
}
