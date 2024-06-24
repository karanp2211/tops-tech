//17.Calculate 5 numbers from user and calculate number of even and odd using of while loop.
#include <stdio.h>
int main(){
    int count=0,even=0,odd=0,num[5];
    printf("Enter number:");
    scanf("%d",&num);
    while(count<5){
        if(num[count]%2==0){
            even++;
        }
            else{
                odd++;
            }
        count++;
    }
    printf("\n the number is even:%d",even);
    printf("\n the number is odd:%d",odd);
}
