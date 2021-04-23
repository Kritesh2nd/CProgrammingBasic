#include<stdio.h>
void main(){
    // Question 3
    // WAP to input average marks and add 10% if the average
    // marks is more than or equal to 65%.
    system ("cls");
    int a;
    printf("Enter your average marks ");
    scanf("%d",&a);
    if(a >= 65){printf("Your average marks is %d",a+10);}
    else{printf("Your average marks is %d",a);}
}