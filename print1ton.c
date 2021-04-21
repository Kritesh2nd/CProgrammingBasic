#include<stdio.h>
void main(){
    //WAP to display numbers divisible by 3 from 1 to n
    //where n is inout given by user
    system("cls");
    int a,b;
    printf("Enter a number ");
    scanf("%d",&a);
    for(b=0;b<a;b++){
        if((b+1)%3 == 0){
            printf("%d ",b+1);
        }
    }
} 