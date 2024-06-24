//Perform 2D matrix array
#include<stdio.h>
int main(){
int row,col,arr1[20][20],arr2[20][20],sum[20][20];
    printf("The size of row and column:");
    for(row=0;row<2;row++){
        for(col=0;col<2;col++){
    scanf("%d %d",&row,&col);
        }
    }
    printf("\n enter the value of array1:");
    for(row=0;row<2;row++){
        for(col=0;col<2;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("\n enter the value of array2:");
    for(row=0;row<2;row++){
        for(col=0;col<2;col++){
            scanf("%d",&arr2[row][col]);
        }
    }
    printf("\n printing of array1:");
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<2;col++){
            printf("%d \t",arr1[row][col]);     
        }
    }
    printf("\n printing of array2:");
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<2;col++){
            printf("%d \t",arr2[row][col]);     
        }
    }
       // for addition on array
    for(row=0;row<2;row++){
          for(col=0;col<2;col++){
            sum[row][col] = arr1[row][col] + arr2[row][col];
        }
    }
    printf("\n after addition of array1:");
        for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<2;col++){
            printf("%d \t",sum[row][col]);     
        }
    }
}