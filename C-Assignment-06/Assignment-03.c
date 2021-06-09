/*3.WAP to read name,age,height and marks obtainedin 5 different subjects by student.Also display the average marks.*/
#include<stdio.h>
void main(){
    system("cls");
    int a,b,avg=0;
    struct StudentData{
        char name[30];
        int age,marks[5];
        float height;
    };
    struct StudentData sd;
    printf("Enter Name, Age, Height ");
    scanf("%s %d %f",sd.name,&sd.age,&sd.height);
    for(a=0;a<5;a++){
        printf("Enter marks for subject %d ",a+1);
        scanf("%d",&sd.marks[a]);
        avg = avg + sd.marks[a];
    }
    printf("\nName:%s\nAge:%d\nHeight:%f\nMarks\n",sd.name,sd.age,sd.height);
    for(b=0;b<5;b++){
       printf("Subject %d: %d\n",b+1,sd.marks[b]);
    }
    printf("Average marks is %d",avg/5);
}