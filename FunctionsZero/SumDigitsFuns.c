// 2.WAP to sum digits on any given number using function.
#include<stdio.h>
void main(){
    system("cls");
    int sum = SumDigits();
    printf("The sum of digits is %d",sum);
}
int SumDigits(){
    int num,tem,sum=0;
    printf("Enter a number ");
    scanf("%d",&num);
    while(num != 0){
        tem = num % 10;
        num = num / 10;
        sum = sum + tem;
    }
    return sum;
}