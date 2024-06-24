//Write a program in C to count the total number of words in a string.
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int count=0,i;
    printf("enter name:");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' ' && str[i+1] !=' '){
            count++;
        }
    }
    printf("\n total  number of words:%d",count+1);
}
