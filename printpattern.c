#include <stdio.h>
void main(){
    system("cls");
    int a,b;
    for(a=0;a<5;a++){
        for(b=0;b<a+1;b++){
            printf("%d ",b+1);
        }
        printf("\n");
    }
    printf("\n");
    int c,d,e=1;
    for(c=5;c>0;c--){
        for(d=5;d>5-e;d--){
            printf("%d ",d);
        }e++;
        printf("\n");
    }
    printf("\n");
    int f,g,h=1;
    for(f=0;f<4;f++){
        for(g=0;g<f+1;g++){
            printf("%d ",h);
            h++;
        }
        printf("\n");
    }
    printf("\n");
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
    int l,m,n,o;
    for(l=96;l<100;l++){
        for(m=96;m<l+1;m++){
            printf("%c ",m+1);
        }
        printf("\n");
    }
    printf("\n");
}