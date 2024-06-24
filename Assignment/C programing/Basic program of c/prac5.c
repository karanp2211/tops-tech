//Find Area of Cube formula : a = 6a2
#include <stdio.h>
int main() {
    double edgeLength, surfaceArea;
    printf("Enter the length of the edge of the cube: ");
    scanf("%lf", &edgeLength);
    surfaceArea = 6 * edgeLength * edgeLength;
    printf("The surface area of the cube is: %.2f\n", surfaceArea);
}
