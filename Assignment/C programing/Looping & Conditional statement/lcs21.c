//Accept 3 numbers from user using while loop and check each numbers palindrome.
#include<stdio.h>
int main(){
    int rev=0,rem,temp,num,i=0;
        printf("enter number %d:",i+1);
        scanf("%d",&num);
        printf("\nentered number:%d",num);
        temp=num;
        while(temp>0){
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
            printf("\n reversed number:%d",rev);
            if(num==rev){
                printf("\n the number is palindrome.");
            }
                else{
                    printf("\n the number is not palindrome.");
        }
}