#include<stdio.h>
void main(){
    // Question 1
    //WAP to convert the temperature in fahrenheit to celsius
    system ("cls");
    float a,b;
    printf("Enter temperature in fahrenheit ");
    scanf("%f",&a);
    b=((a-32)*5)/9;
    printf("Temperature in celsius is %f",b);
}