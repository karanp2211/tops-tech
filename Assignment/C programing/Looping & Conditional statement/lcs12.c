//Program of Armstrong Number in C Using For Loop & While Loop.
#include <stdio.h>
int main() {
    int num,i,temp, rem,sum=0;
    printf("Enter number:");
    scanf("%d", &num);
    temp=num;
//    while(temp>0){
//        rem=temp%10;
//        sum+= rem*rem*rem;
//        temp=temp/10;
//    }
 for(i=0;i<=num;i++){
        rem=temp%10;
        sum+= rem*rem*rem;      
        temp=temp/10;
 }
   if(sum==num){
   printf("the number is armstrong.");
   }
   else{
       printf("the number is not armstrong.");
   }
 }
     
      

