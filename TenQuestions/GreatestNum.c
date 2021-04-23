#include<stdio.h>
void main(){
    // Question 5
    // WAP to find the largest of three diffrent integer numbers entered by user
    system ("cls");
    int a,b,c;
    printf("Enter three numbers ");
    scanf("%d %d %d",&a,&b,&c);
    if(a > b && a > c){printf("The greatest number is %d",a);}
    else if(b > a && b > c){printf("The greatest number is %d",b);}
    else if(c > b && c > a){printf("The greatest number is %d",c);}
    else{printf("Enter three diffent numbers");}
}