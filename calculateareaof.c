#include <stdio.h>
void main(){
    // WAP to calculate area according to user input.
    // If user press 1 calculate area of rectangle,
    // if user press 2 calculate area of circle,
    // if user press 3 calculate area of triange.
    system("cls");
    float a,h,b,r,pi=3.142857143;
    printf("Press 1 to calculate area of rectangle\n");
    printf("Press 2 to calculate area of circle\n");
    printf("Press 3 to calculate area of triange\n");
    scanf("%f",&a);
    if(a == 1){
        printf("Enter length and breath of rectangle ");
        scanf("%f %f",&h,&b);
        printf("Area of rectangle is %f2",h*b);
    }
    else if(a == 2){
        printf("Enter radius a of circle ");
        scanf("%f",&r);
        printf("Area of circe is %f",pi*r*r);
    }
    else if(a == 3){
        printf("Enter height and base of triangle ");
        scanf("%f %f",&h,&b);
        printf("Area of traingle is %f",0.5*h*b);
    }
    else{
        printf("Enter 1 ~ 3");
    }
}