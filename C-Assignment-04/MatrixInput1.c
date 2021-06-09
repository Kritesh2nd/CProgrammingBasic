/*7.WAP to read 2 matrices from user.Add them and display result.
    i)Take input inside main
    ii)Make different function to take input from user and to display values.*/
// i)Take input inside main
#include<stdio.h>
void main(){
    system("cls");
    int matrix1[2][2],matrix2[2][2],matrix3[2][2],i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter a number for first matrix ");
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter a number for second matrix ");
            scanf("%d",&matrix2[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Displaying sum of  first & second matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",matrix3[i][j]);
        }
        printf("\n");
    }
}