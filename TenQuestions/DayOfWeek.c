#include<stdio.h>
void main(){
    // Question 6
    // WAP display day of weeks by taking input from 1~7
    system ("cls");
    int a;
    printf("Enter number from 1 to 7 ");
    scanf("%d",&a);
    switch (a){
        case 1:printf("Sunday");break;
        case 2:printf("Monday");break;
        case 3:printf("Tuesday");break;
        case 4:printf("Wednesday");break;
        case 5:printf("Thrusday");break;
        case 6:printf("Friday");break;
        case 7:printf("Saturday");break;
        default:printf("Error input from 1 to 7");
    }
}