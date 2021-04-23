#include<stdio.h>
void main(){
    // Question 8
    // WAP to take input a positive integer and display 
    // sum of digits in it.
    system("cls");
    int a,b,c=0;
    printf("Enter positive integer ");
    scanf("%d",&a);
    if(a > 0){
        while(a != 0){
            b=a%10;
            c=c+b;
            a=a/10;
        }
    }
    else{printf("Enter positive integer");}
    printf("\n%d",c);
}