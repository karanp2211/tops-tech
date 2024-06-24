//Accept marks from user and check pass or fail
#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks >= 50) {
        printf("You passed with %d marks.\n", marks);
    } else {
        printf("You failed with %d marks.\n", marks);
    }
}
