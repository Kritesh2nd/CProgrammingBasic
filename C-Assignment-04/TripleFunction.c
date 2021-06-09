/*3.WAP to add and substract two values using function.
    i.Use different function for addition and substraction and display result inside function.
    ii.Use different function for addition and substraction and display result from main.
    iii.Use same function for addition and substraction and display result from main.*/
// i.Use different function for addition and substraction and display result inside function.
// #include<stdio.h>
// int Addition(int, int);
// int Substraction(int, int);
// void main(){
//     system("cls");
//     int a,b;
//     printf("Enter two number ");
//     scanf("%d %d",&a,&b);
//     Addition(a,b);
//     Substraction(a,b);
// }
// int Addition(int x, int y){
//     printf("The addition is %d\n",x+y);
// }
// int Substraction(int x, int y){
//     printf("The substraction is %d\n",x-y);
// }

// ii.Use different function for addition and substraction and display result from main.
// #include<stdio.h>
// int Addition(int, int);
// int Substraction(int, int);
// void main(){
//     system("cls");
//     int a,b;
//     printf("Enter two number ");
//     scanf("%d %d",&a,&b);
//     printf("The addition is %d\n",Addition(a,b));
//     printf("The substraction is %d\n",Substraction(a,b));
// }
// int Addition(int x, int y){return x + y;}
// int Substraction(int x, int y){return x - y;}

// iii.Use same function for addition and substraction and display result from main.
#include<stdio.h>
void main(){
    system("cls");
    int a,b,c,d;
    printf("Enter two number ");
    scanf("%d %d",&a,&b);
    AddSub(a,b,&c,&d);
    printf("%d %d",c,d);
}
int AddSub(int w, int  x, int*y, int *z){
    *y = w+x;
    *z = w-x;
}
