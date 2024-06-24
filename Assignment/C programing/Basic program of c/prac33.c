//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include <stdio.h>
int main() {
    int N, square, cube;
    printf("Enter an integer: ");
    scanf("%d", &N);
    square = N * N; // N^2
    cube = N * N * N; // N^3
    printf("First power of %d is: %d\n", N, N); // N^1 is N itself
    printf("Second power of %d is: %d\n", N, square);
    printf("Third power of %d is: %d\n", N, cube);
}
