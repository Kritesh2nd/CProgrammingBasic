/*2.Define nested structure.WAP that takes name,salary and date of birth of an employee and display it using structure.
    Data members of date of birth(Y/M/D)must be on separate structure.
    
    Nested structure in C is nothing but structure within structure. 
    One structure can be declared inside other structure as we declare 
    structure members inside a structure. The structure variables can 
    be a normal structure variable or a pointer variable to access the data.*/
#include<stdio.h>
void main(){
    system("cls");
    struct DateOfBirth{
        int year,month,day;
    };
    struct DataEmployee{
        char name[30];
        int salary;
        struct DateOfBirth dob;
    };
    struct DataEmployee dm;
    printf("Enter Name, Salary, DOB in (Y/M/D) format ");
    scanf("%s %d %d %d %d",dm.name,&dm.salary,&dm.dob.year,&dm.dob.month,&dm.dob.day);
    printf("Name:%s\nSalary:%d\nYear:%d\nMonth:%d\nDay:%d\n",dm.name,dm.salary,dm.dob.year,dm.dob.month,dm.dob.day);
}