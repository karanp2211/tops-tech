//Write a program in C to count the total number of vowels or consonants in a string.
#include<stdio.h>
int main(){
    char str[50];
    int i,vowel=0,conso=0;
    printf("enter string:");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++){
        if(str[i] == 'a' || str[i] =='e' || str[i] =='i' || str[i] =='o' || str[i] == 'u'){
            vowel++;
        }
        else {
            conso++;
        }
    }
    printf("\n total number of vowels:%d",vowel);
    printf("\n total number of consonants:%d",conso);
}