/*5.How do you define array?
    Explain with syntax.
    WAP to take n input in array from user and display their average.*/
#include<stdio.h>
void main(){
    system("cls");
    int n,sum=0,avg,x,y;
    printf("Enter n number ");
    scanf("%d",&n);
    int arr[n];
    for(x=0;x<n;x++){
        printf("Enter a number ");
        scanf("%d",&y);
        arr[x] = y;
        sum = sum + arr[x];
    }
    avg=sum/n;
    printf("The average is %d",avg);
}