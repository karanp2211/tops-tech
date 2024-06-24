// Create an application that can perform all string related operations
// reverse a string
// Concatenation 
// Palindrome
// Copy a string 
// Length of the string 
// Frequency of character in s string 
// Find number of vowels and consonants 
// Find number of blank spaces and digits 
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void rev(char str1[]){
       int lenght=strlen(str1);
       for(int i=0;i<lenght/2;i++){
        char temp=str1[i];
        str1[i]=str1[lenght-i-1];
        str1[lenght-i-1]=temp;
       }
}
void concat(char str1[],char str2[]){
        strcat(str1,str2);
}
int palindrome(char str1[]){
        int lenght=strlen(str1);
        for(int i=0;i<lenght;i++){
                if(str1[i] != str1[lenght-i-1]){
                        return 0;
                }
        }
}
void copystring(char str1[],char str2[]){
        strcpy(str1,str2);    
}
int lenght(char str1[]){
        return strlen(str1);
}
void frequency(char str1[]){
        int frequency[250]={0};
        for(int i=0;i< strlen(str1);i++){
                frequency[str1[i]]++;
        }
        printf("\n character frequency:");
        for(int i=0;i<250;i++){
                if(frequency[i]> 0 &&  isprint(i)){
                        printf("'%c': %d\n",i,frequency[i]);
                }
        }
}
void vowelsandconsonants(char str1[]){
        int i,vowel=0,conso=0;
//     printf("enter string:");
//     scanf("%s",&str1);
    for(i=0;str1[i]!='\0';i++){
        if(str1[i] == 'a' || str1[i] =='e' || str1[i] =='i' || str1[i] =='o' || str1[i] == 'u'){
            vowel++;
        }
        else if((str1[i]>='a' && str1[i]<='z') || (str1[i]>='A' && str1[i]<='Z')){
            conso++;
        }
    }
    printf("\n total number of vowels:%d",vowel);
    printf("\n total number of consonants:%d",conso);
}
void blankspaceanddigit(char str1[]){
        int space=0,digits=0;
        for(int i=0;i<strlen(str1);i++){
        if(isspace(str1[i])){
                space++;
        }
        else if(isdigit(str1[i])){
                digits++;
                }
        }

        printf("Spaces:%d\ndigits:%d\n",space,digits);
}
int main(){
    int choice;
    char input[100];
    
do
{
    printf("\n Menu:");
    printf("\n1.reverse a string:");
    printf("\n2.Concatenation:");
    printf("\n3.Palindrome:");
    printf("\n4.Copy a string:");
    printf("\n5.Length of the string:");
    printf("\n6.Frequency of character in s string:");
    printf("\n7.Find number of vowels and consonants:");
    printf("\n8.Find number of blank spaces and digits:");

    printf("\n Enter choice:");
    scanf("%d",&choice);

    switch(choice){
        case 1: printf("Reverse string.");
                printf("\n Enter string1:");
                scanf("%s",&input);
                rev(input);
                printf("\n Reversed string:%s",input);
                break;
        case 2: printf("Concatenation.");
                printf("\n Enter string1:");
                scanf("%s",&input);
                char secondstring[50];
                printf("\n Enter string2:");
                scanf("%s",&secondstring);
                concat(input,secondstring);
                printf("\n Concatenation of string:%s",input);
                break;
        case 3: printf("palindrome.");
                printf("\n enter string:");
                scanf("%s",&input);
                if(palindrome(input)){
                        printf("\n string is palindrome.");
                }
                else{
                        printf("\n string is not palindrome.");
                }       
                break;
        case 4: printf("Copy a string.");
                printf("\n Enter string1:");
                scanf("%s",&input);
                // printf("\n Enter string2:");
                // gets(ip);
                char copiedstring[50];
                copystring(copiedstring,input);   
                printf("\n copy string:%s",copiedstring);
                break;
        case 5: printf("Length of the string.");
                printf("\n Enter string1:");
                scanf("%s",&input);
                printf("\n lenght of string:%d",lenght(input));
                break;
        case 6: printf("Frequency of character in s string.");
                printf("\n Enter string1:");
                scanf("%s",&input);
                frequency(input);
                break;
        case 7: printf("Vowels and consonants."); 
                printf("\n Enter string1:");
                scanf("%s",&input);
                vowelsandconsonants(input);
                break;
        case 8: printf("Blank and digit.");
                printf("\n Enter string:");
                scanf("%s",&input);
                blankspaceanddigit(input);
                break;
        case 0: printf("/n Exit");
                printf("\n exiting program.");
                return 0;
                break;
        default:
                printf("\n Invalid choice. please enter a valid option.");  
                                    
        }     
        char continuechoice;
        printf("\n do you want to continue? (y/n): ");
        scanf(" %c",&continuechoice);

        if(continuechoice !='y' && continuechoice!='Y'){
                printf("bye..");
                return 0;
        }   
         } while(1);  
}  
