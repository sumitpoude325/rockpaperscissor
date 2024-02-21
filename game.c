#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int logic(char c, char u);
int ran();
int main()
{
    char u, c;

    int num = ran();
    if (num <= 33)
    {
        c = 'r';
    }
    else if (num > 33 && num < 66)
    {
        c = 'p';
    }
    else
    {
        c = 's';
    }
    printf("Welcome to my game!\n");
    printf("r is for rock\t p is for paper \t s is for scissors\n");
    printf("Choose between Rock, Paper and Scissors\t");
    scanf("%c", &u);
    int result = logic(c, u);
    switch (result)
    {
    case -1:
        printf("You choosed %c and computer choosed %c\n", u, c);
        printf("YOU LOOSE");
        break;
    case 1:
        printf("You choosed %c and computer choosed %c\n", u, c);
        printf("YOU WON");
        break;
    case 0:
        printf("You choosed %c and computer choosed %c\n", u, c);
        printf("Its a draw");
        break;
    }
    return 0;
}
int logic(char c, char u)
{
    if (c == u)
    {
        return 0;
    }

    if ((c == 'R' || c == 'r') && (u == 'p' || u == 'P'))
    {
        return 1;
    }
    else if ((c == 'r' || c == 'R') && (u == 's' || u == 'S'))
    {
        return -1;
    }

    if ((c == 'p' || c == 'P') && (u == 's' || u == 'S'))
    {
        return 1;
    }
    else if ((c == 'p' || c == 'P') && (u == 'r' || u == 'R'))
    {
        return -1;
    }

    if ((c == 'S' || c == 's') && (u == 'r' || u == 'R'))
    {
        return 1;
    }
    else if ((c == 'S' || c == 's') && (u == 'p' || u == 'P'))
    {
        return -1;
    }
}
int ran()
{
    srand(time(0));
    return rand() % 100 + 1; // generates random number between 0-100;
}
