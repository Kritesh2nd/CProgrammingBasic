/*2.WAP to find maximum and minumun value in an given array of n elements.*/
#include<stdio.h>
void main(){
    system("cls");
    int arr[100],min,max,i,j,n;
    printf("Enter size of array ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter a number ");
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];
    for(j=0;j<n;j++){
        if(arr[j] < min){min = arr[j];}
        if(arr[j] > max){max = arr[j];}
    }
    printf("The minumun value is array is %d\n",min);
    printf("The maximum value is array is %d\n",max);
}