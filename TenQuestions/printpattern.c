#include <stdio.h>
void main(){
    // Question 10
    // WAP to print the following pattern
    // 1             5           1                   1   a
    // 1 2           5 4         2 3               1 2   a b
    // 1 2 3         5 4 3       4 5 6           1 2 3   a b c
    // 1 2 3 4       5 4 3 2     7 8 9 10      1 2 3 4   a b c d
    // 1 2 3 4 5     5 4 3 2 1               1 2 3 4 5
    system("cls");
    //First Pattern
    int a,b;
    for(a=0;a<5;a++){
        for(b=0;b<a+1;b++){
            printf("%d ",b+1);
        }
        printf("\n");
    }
    printf("\n");
    //Second Pattern
    int c,d,e=1;
    for(c=5;c>0;c--){
        for(d=5;d>5-e;d--){
            printf("%d ",d);
        }e++;
        printf("\n");
    }
    printf("\n");
    //Third Pattern
    int f,g,h=1;
    for(f=0;f<4;f++){
        for(g=0;g<f+1;g++){
            printf("%d ",h);
            h++;
        }
        printf("\n");
    }
    printf("\n");
    //Fourth Pattern
    int i,j,k;
    for(i=0;i<5;i++){
        for(j=0;j<4-i;j++){
            printf("  ");
        }
        for(k=0;k<i+1;k++){
            printf("%d ",k+1);
        }
        printf("\n");
    }
    printf("\n");
    //Fifth Pattern
    int l,m,n,o;
    for(l=96;l<100;l++){
        for(m=96;m<l+1;m++){
            printf("%c ",m+1);
        }
        printf("\n");
    }
    printf("\n");
}