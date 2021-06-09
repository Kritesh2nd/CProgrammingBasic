/*4.WAP to swap two values using function and display result from main.*/
#include<stdio.h>
void main(){
    system("cls");
    int a,b;
    printf("Enter two nummber ");
    scanf("%d %d",&a,&b);
    Swap(&a,&b);
    printf("%d %d",a,b);
}
int Swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}