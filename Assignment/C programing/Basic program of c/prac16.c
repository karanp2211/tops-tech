//Convert country’s name in abbreviate form.
#include <stdio.h>
int main() {
    char fname[20],mname[20],lname[20];
    printf("enter the first name,middle name,last name:");
    scanf("%s %s %s",&fname,&mname,&lname);
    printf("\n Abbreviate form:");
    printf("%c. %c. %s\n",fname[0],mname[0],lname);
}
