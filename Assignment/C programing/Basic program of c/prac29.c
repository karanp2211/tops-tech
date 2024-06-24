//Convert minutes into seconds and hours.
#include <stdio.h>
int main() {
    int minutes;
    float hours;
    int seconds;
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    seconds = minutes * 60;
    hours = minutes / 60.0; 
    printf("%d minutes is %d seconds or %.2f hours\n", minutes, seconds, hours);
}
