#include<stdio.h>
void main(){
    // Question 10
    // WAP to display multiplication table from 1 to 10
    system("cls");
    int a,b,c;
    printf("Multiplication table from 1 to 10 \n");
    for(a=1;a<=10;a++){
        // printf("%d * %d = %d\t",a,1,a);
        for(b=1;b<=10;b++){
            printf("%d * %d\t= %d\t",b,a,a*b);
        }
        printf("\n");
    }
}