/*3.WAP to check whether given string is palindrome or not. A palindrome word is
    sequence of characters which reads the same backward as forward, such as madam
    or racecar.You can use strcmp() function to compare 2 strings.*/
#include<stdio.h>
void main(){
    system("cls");
    char word[100];
    printf("Enter a word ");
    gets(word);
    int a=strlen(word),b=0,c=0;
    while(b!=a/2){
        if(word[c] == word[a-c-1]){
            c++;
        }
        b++;
    }
    if(c == a/2){printf("String is palindrome");}
    else {printf("String is not palindrome");}
}
