/*If double a=50 and double*p=&a; (assume address of a=156772).
    WAP that shows ouput of a,&a,p,*p.*/
#include<stdio.h>
void main(){
    system("cls");
    double a=50, *p=&a;
    printf("The out of a: %lf\n",a);
    printf("The out of &a: %lf\n",&a);
    printf("The out of p: %lf\n",p);
    printf("The out of *p: %lf\n",*p);
}