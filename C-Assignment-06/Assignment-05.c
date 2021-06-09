/*5.WAP to read name,price and code of product in a supermarket.
    Pass structure to user defined function display(.....)and display values there.*/
#include<stdio.h>
struct ProcuctData{
        char name[50];
        int price,code;
    };
void PrintProduct(struct ProcuctData *data);
void main(){
    system("cls");
    
    struct ProcuctData pd;
    printf("Enter Name, Price, Code: ");
    scanf("%s %d %d",pd.name,&pd.price,&pd.code);
    PrintProduct(&pd);
}
void PrintProduct(struct ProcuctData *data){
    printf("Name:%s\nPrice:%d\nCode:%d",data->name,data->price,data->code);
}