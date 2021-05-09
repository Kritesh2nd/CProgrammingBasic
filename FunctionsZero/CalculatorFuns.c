/*5.WAP to add,multiply,divide and substract 2 numbers given by the user.
    Use separate function foradd,multiply,divide and substract.Display result from main function. */
#include<stdio.h>
int Addition(int, int);
int Multiplication(int, int);
int Division(int, int);
int Substraction(int, int);
void main(){
    system("cls");
    int a,b;
    printf("Enter two number ");
    scanf("%d %d",&a,&b);
    printf("Addition is %d\n",Addition(a,b));
    printf("Multiplication is %d\n",Multiplication(a,b));
    printf("Division is %d\n",Division(a,b));
    printf("Substraction is %d\n",Substraction(a,b));
}
int Addition(int a, int b){
    return a + b;
}
int Multiplication(int a, int b){
    return a * b;
}
int Division(int a, int b){
    return a / b;
}
int Substraction(int a, int b){
    return a - b;
}