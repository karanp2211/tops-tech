//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include<stdio.h>
int main(){
    int r,c,row,col,arr1[20][20],arr2[20][20],mul[20][20],sum[20][20],sub[20][20];
    printf("enter row:");
    scanf("%d",&row);
    printf("enter column:");
    scanf("%d",&col);

    printf("\n enter the value of array1:");
    for(r=0;r<row;r++){
        for(c=0;c<col;c++){
            scanf("%d",&arr1[r][c]);
        }
    }
    printf("\n enter the value of array2:");
    for(r=0;r<row;r++){
        for(c=0;c<col;c++){
            scanf("%d",&arr2[r][c]);
        }
    }
    printf("\n printing of array1:");
    for(r=0;r<row;r++){
        printf("\n");
        for(c=0;c<col;c++){
            printf("%d \t",arr1[r][c]);     
        }
    }
    printf("\n printing of array2:");
    for(r=0;r<row;r++){
        printf("\n");
        for(c=0;c<col;c++){
            printf("%d \t",arr2[r][c]);     
        }
    }
    // addition of two number;
    for(r=0;r<row;r++){
        printf("\n");
        for(c=0;c<col;c++){
            sum[r][c]=arr1[r][c] + arr2[r][c];    
        }
    }
    printf("\n after addition two number:");
    for(r=0;r<row;r++){
        printf("\n");
        for(c=0;c<col;c++){
            printf("%d \t",sum[r][c]); 
        }
    }
    // substruction of two number;
    for(r=0;r<row;r++){
        printf("\n");
        for(c=0;c<col;c++){
           sub[r][c]=arr1[r][c] - arr2[r][c];    
        }
    }
    printf("\n after substruction two number:");
    for(r=0;r<row;r++){
        printf("\n");
        for(c=0;c<col;c++){
            printf("%d \t",sub[r][c]); 
        }
    }
    // multiplication of two number;
    for(r=0;r<row;r++){
        for(c=0;c<col;c++){
            mul[r][c]=0;
            for(int element=0;element<col;element++){
                mul[r][c] += arr1[r][element] * arr2[element][c];
            }
        }
    }
    printf("\n Mutiplication on array:");
    for(r=0;r<row;r++){
        printf("\n");
        for(c=0;c<col;c++){
            printf("%d \t",mul[r][c]);     
        }
    }
}