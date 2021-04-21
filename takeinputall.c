#include<stdio.h>
void main(){
    //WAP to take input from user until users enters 0.
    //Add all the positive numbers and display sum as wll as count.
    // Add all the negative numbers and display their counts and sum.
    system("cls");
    int a[100],b=1,c[100],d[100],e=0,f=0,g,h,i=0,j,k=0;
    a[0]=1;
    while(a[b-1] != 0){
        printf("Enter a number ");
        scanf("%d",&a[b]);
        if(a[b] > 0){
            c[e]=a[b];
            e++;
        }
        else if(a[b] < 0){
            d[f]=a[b];
            f++;
        }
        b++;
    }
    for(h=0;h<e;h++){
        printf("%d ",c[h]);
        i = i + c[h];
    }
    for(j=0;j<f;j++){
        printf("%d ",d[j]);
        k = k + d[j];
    }
    printf("\nThere are %d positive numbers and %d negative numbers",e,f);
    printf("\nThe sum of %d positive numbers are %d",e,i);
    printf("\nThe sum of %d negative numbers are %d",f,k);
} 