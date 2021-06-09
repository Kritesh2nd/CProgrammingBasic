/*1.WAP to calculate norm and trace of matrix.*/
#include<stdio.h>
void main(){
    system("cls");
    int matrix1[3][3]={{2,6,7},{6,-6,8},{0,2,4}},trace=0,len1 = sizeof(matrix1[0])/4,i;
    int matrix2[3][3]={{2,6,7},{6,2,8},{0,1,3}},normal=0,len2 = sizeof(matrix2[0])/4,j,k;
    for(i=0;i<len1;i++){
        trace = trace + matrix1[i][i];
    }
    for(j=0;j<len2;j++){
        for(k=0;k<len2;k++){
            normal = (normal + (matrix2[j][k] * matrix2[j][k]));
        }
    }
    normal = sqrt(normal);
    printf("The trace of matrix is %d\n",trace);
    printf("The norm of matrix is %d\n",normal);
}