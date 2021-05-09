// 3.WAP to find the largest among three numbers using function and display largest number from main.
#include<stdio.h>
void main(){
    system("cls");
    int largest = LargestNumber();
    printf("The largest number is %d",largest);
}
int LargestNumber(){
    int num1,num2,num3;
    printf("Enter three number ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1 > num2 && num1 > num3){
        return num1;
    }
    else if(num2 > num1 && num2 > num3){
        return num2;
    }
    else{
        return num3;
    }
}