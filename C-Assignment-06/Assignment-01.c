/*1.How structures are different from arrays? 
    WAP to read name,location and phone number of an college using structure.
    
    A structure creates a data type that can be used to group items of possibly 
    different types into a single type. Array refers to a collection consisting 
    of elements of homogenous data type. Structure refers to a collection consisting 
    of elements of heterogenous data type.*/

#include<stdio.h>
void main(){
    system("cls");
    struct clzstudent{
        char name[20],location[30];
        int phone;
    };
    struct clzstudent c;
    printf("Enter Name, Location, Ph Number ");
    scanf("%s %s %d",c.name,c.location,&c.phone);
    printf("Name:%s\nLocation:%s\nPh Number:%d",c.name,c.location,c.phone);
}