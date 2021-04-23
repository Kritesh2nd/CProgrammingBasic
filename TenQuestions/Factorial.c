#include<stdio.h>
void main(){
    // Question 9
    // WAP to read a positive integer and display its factorial
    // Input less than 10 for small output
    system("cls");
    int a,b,c=1;
    printf("Enter a positive integer ");
    scanf("%d",&a);
    if(a > 0){
        for(b=1;b<=a;b++){
            c=c*b;
        }
        printf("\n%d",c);
    }
    else{printf("Enter positive integer");}
}