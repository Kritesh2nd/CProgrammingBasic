// 1.WAP to check whether number is even or odd using function.
#include<stdio.h>
void main(){
    system("cls");
    OddOrEven();
}
int OddOrEven(){
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    if(a % 2 == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}