/*4.WAP to read serial_number,price,brand_name,model_number of different 20 laptops using structure.*/
#include<stdio.h>
void main(){
    system("cls");
    struct LaptopData{
        int snum,price;
        char bname[50],mnum[50];
    };
    struct LaptopData ld[20];
    for(int a=0;a<20;a++){
        printf("Enter BrandName, SerialNumber, ModelNUmber, Price ");
        scanf("%s %d %s %d",ld[a].bname,&ld[a].snum,ld[a].mnum,&ld[a].price);
    }
    for(int b=0;b<20;b++){
        printf("\nBrandName:%s\nSerialNumber:%d\nModelNUmber:%s\nPrice:%d\n",ld[b].bname,ld[b].snum,ld[b].mnum,ld[b].price);
    }
}
