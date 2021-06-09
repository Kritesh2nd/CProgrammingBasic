/*4.Write a program that generates a random number between 1 and 20
    and asks the user to guess what the number is. If the user's guess is
    higher than the random number, the program should display "Too high,
    try again." If the user's guess is lower than the random number, the
    program should display "Too low, try again." The program should use a
    loop that repeats until the user correctly guesses the random number.
    Display score after user enters correct number.Total score is 20.And
    score deduced by one each time user enter wrong guess.*/
#include<stdio.h>
void main(){
    system("cls");
    srand(time(NULL));
    int randnum = rand() % 20 + 1,score = 21,guessnum;
    printf("Guess a number between 1~20\n");
    while(randnum != guessnum){
        printf("Guess the random number ");
        scanf("%d",&guessnum);
        if(guessnum > randnum){printf("Too hight, try again.\n");}
        else if(guessnum < randnum){printf("Too low, try again.\n");}
        score--;
    }
    printf("You guessed right %d is right answer\n",randnum);
    printf("Your score is %d",score);
}
