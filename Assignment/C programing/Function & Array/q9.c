//Write a program of structure employee that provides the following
//a. information -print and display empno, empname, address and age
//b. Write a program of structure for five employee that provides the following information -print and display 
//empno, empname, address and age
#include<stdio.h>
struct employee{
    int empno;
    char empname[20],address[50];
    float age[20];
}e1,e2,e3,e4,e5;
int main(){
    printf("enter name emp1:");
    gets(e1.empname);
    printf("\n enter rollno:");
    scanf("%d",&e1.empno);
    printf("enter address:");
    scanf("%s",&e1.address);
    printf("\n enter age:");
    scanf("%f",&e1.age);
    printf("enter name emp2:");
    scanf("%s",&e2.empname);
    printf("\n enter rollno:");
    scanf("%d",&e2.empno);
    printf("enter address:");
    scanf("%s",&e2.address);
    printf("\n enter age:");
    scanf("%f",&e2.age);
    printf("enter name emp3:");
    scanf("%s",&e3.empname);
    printf("\n enter rollno:");
    scanf("%d",&e3.empno);
    printf("enter address:");
    scanf("%s",&e3.address);
    printf("\n enter age:");
    scanf("%f",&e3.age);
    printf("enter name emp4:");
    scanf("%s",&e4.empname);
    printf("\n enter rollno:");
    scanf("%d",&e4.empno);
    printf("enter address:");
    scanf("%s",&e4.address);
    printf("\n enter age:");
    scanf("%f",&e4.age);
    printf("enter name emp5:");
    scanf("%s",&e5.empname);
    printf("\n enter rollno:");
    scanf("%d",&e5.empno);
    printf("enter address:");
    scanf("%s",&e5.address);
    printf("\n enter age:");
    scanf("%f",&e5.age);

    printf("\n enter details of emp1:");
    printf("\n Rollno:%d",e1.empno);
    printf("\n name:%s",e1.empname);
    printf("\n address:%s",e1.address);
    printf("\n age:%f",e1.age);
    printf("\n enter details of emp2:");
    printf("\n Rollno:%d",e2.empno);
    printf("\n name:%s",e2.empname);
    printf("\n address:%s",e2.address);
    printf("\n age:%f",e2.age);
    printf("\n enter details of emp3:");
    printf("\n Rollno:%d",e3.empno);
    printf("\n name:%s",e3.empname);
    printf("\n address:%s",e3.address);
    printf("\n age:%f",e3.age);
    printf("\n enter details of emp4:");
    printf("\n Rollno:%d",e4.empno);
    printf("\n name:%s",e4.empname);
    printf("\n address:%s",e4.address);
    printf("\n age:%f",e4.age);
    printf("\n enter details of emp5:");
    printf("\n Rollno:%d",e5.empno);
    printf("\n name:%s",e5.empname);
    printf("\n address:%s",e5.address);
    printf("\n age:%f",e5.age);
}