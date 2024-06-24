//Convert kilometers into meters.
#include <stdio.h>
int main() {
    float kilometers, meters;
    printf("Enter the distance in kilometers: ");
    scanf("%f", &kilometers);
    meters = kilometers * 1000;
    printf("%.2f kilometers is %.2f meters\n", kilometers, meters);
}
