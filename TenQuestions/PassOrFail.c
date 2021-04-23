#include<stdio.h>
void main(){
    // Question 7
    // WAP to take input marks and find either the student
    // got distinction, first division, just pass or failed.
    system ("cls");
    int a;
    printf("Enter marks ");
    scanf("%d",&a);
    if(a >= 80){printf("You got distinction");}
    else if(a >= 65){printf("You got first division");}
    else if(a >= 40){printf("You got pass marks");}
    else{printf("You failed your exam");}
}