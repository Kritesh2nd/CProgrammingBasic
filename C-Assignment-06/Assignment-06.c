/*6.WAP to read brand_name,modelnumber,and price of 10 mobile phones.
    Display those phones whose price is below 10000.*/
#include<stdio.h>
struct MobileData{
    char bname[50];
    int mnum,price;
};
void PrintMobileData(struct MobileData *data);
void main(){
    system("cls");
    struct MobileData md[3];
    for(int a=0;a<3;a++){
        printf("Input BrandName, ModelNumber, Price: ");
        scanf("%s %d %d",md[a].bname,&md[a].mnum,&md[a].price);
    }
    for(int b=0;b<3;b++){
        PrintMobileData(&md[b]);
    }
}
void PrintMobileData(struct MobileData *data){
    if(data->price < 10000){
        printf("\nBrand Name:%s\nModel Number:%d\nPrice:%d\n",data->bname,data->mnum,data->price);
    }
}