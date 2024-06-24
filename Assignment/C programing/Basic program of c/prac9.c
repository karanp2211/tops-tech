//Find circumference of Triangle formula : triangle = a + b + c
#include <stdio.h>
int main() {
    double a, b, c, perimeter;
    printf("Enter the length of side a: ");
    scanf("%lf", &a);
    printf("Enter the length of side b: ");
    scanf("%lf", &b);
    printf("Enter the length of side c: ");
    scanf("%lf", &c);
    perimeter = a + b + c;
    printf("The perimeter (circumference) of the triangle is: %.2f\n", perimeter);
}
