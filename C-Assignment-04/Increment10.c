/*1.WAP to take input from user and increment its value by 10 using function.Display result from main.*/
#include<stdio.h>
int increment(int);
void main(){
    system("cls");
    int a,b;
    printf("Enter a number ");
    scanf("%d",&a);
    b = increment(a);
    printf("The increased value is %d",b);
}
int increment(int x){
    return x+10;
}