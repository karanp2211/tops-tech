//WAP to show difference between Structure and Union.
#include<stdio.h>
struct student{
    int rollno;
    char name[10];
    float marks;
}s1;
    union employee{
        int emp_no;
        char emp_name[10];
}e1;
int main(){
    printf("enter student name:");
    scanf("%s",&s1.name);
    printf("\n enter rollno:");
    scanf("%d",&s1.rollno);
    printf("\n enter total marks:");
    scanf("%f",&s1.marks);
    printf("enter emp name:\n");
    scanf("%s",&e1.emp_name);
    printf("\n enter rollno:");
    scanf("%d",&e1.emp_no);

    printf("\n enter details of student:");
    printf("\n Rollno:%d",s1.rollno);
    printf("\n name:%s",s1.name);
    printf("\n marks:%f",s1.marks);
    printf("\n enter details of employee:");
    printf("\n Rollno:%d",e1.emp_no);
    printf("\n name:%s",e1.emp_name);
}