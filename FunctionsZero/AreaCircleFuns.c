/* 4.Write a function areaofcircle() which accepts radius of float value and return the area of circle.
    Use this function to calculate area of fourcircles having different radii. */
#include<stdio.h>
float areaofcircle(float);
void main(){
    system("cls");
    float r;
    printf("Enter radius ");
    scanf("%f",&r);
    printf("Area of circle is %f",areaofcircle(r));
}
float areaofcircle(float r){
    float area,pi=3.14;
    area = pi * r * r;
    return area;
}