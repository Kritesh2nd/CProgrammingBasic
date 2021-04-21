#include<stdio.h>
void main(){
    //To print 5 x 4 rectangle
    system("cls");
    int a,b,c,d,e,f,g;
    for(a=0;a<4;a++){
        for(b=0;b<5;b++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    //To print 4 x 4 right angle triangle
    for(c=0;c<4;c++){
        for(d=0;d<c+1;d++){
           printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    //To print 5 x 5 right angle triangle
    for(e=0;e<5;e++){
        for(f=0;f<e+1;f++){
            printf("%d ",f+1);
        }
        printf("\n");
    }
}