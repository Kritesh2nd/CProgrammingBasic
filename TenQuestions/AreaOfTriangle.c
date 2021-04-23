#include<stdio.h>
void main(){
    // Question 4
    // WAP to input three sides of triangle and check whether
    // three sides can form triangle and display area of triange.
    system ("cls");
    float x,y,z,a,s;
    printf("Enter three sides of triangle ");
    scanf("%f %f %f",&x,&y,&z);
    if(x+y > z && y+z > x && x+z > y){
        s = (x + y + z) / 2;
        a = sqrt(s*(s-x)*(s-y)*(s-z));
        printf("Area of trianlge is %f",a);
    }
    else{printf("These three sides cannot form triangle");}
}