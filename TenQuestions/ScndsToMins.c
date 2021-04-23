#include<stdio.h>
void main(){
    // Question 2
    // WAP that input seconds as input and convert to minute
    system ("cls");
    int a,b,c;
    printf("Enter time in seconds ");
    scanf("%d",&a);
    if(a < 60){printf("Input more than 60 seconds");}
    else{
        b=a/60;
        c=a%60;
        printf("%d seconds is %d minute %d seconds",a,b,c);
    }
}