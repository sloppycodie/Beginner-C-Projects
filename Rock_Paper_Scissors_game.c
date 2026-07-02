#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

void menuPrint();

int main() {
    int randNum,userInp,reset;
    char comp[50];

    while (reset!=2)
    {
        srand(time(NULL));
        randNum = rand()%3 +1;

        menuPrint();

        printf("\nPlease enter your choice: ");
        scanf("%d",&userInp);

        if (userInp==0)
        {
            break;
        }
        
        if (userInp>3 || userInp<0)
        {
            fprintf(stderr,"\nThe menu code is invalid.\n");
            continue;
        }
        
        switch (randNum)
        {
        case 1:
            strcpy(comp,"Rock");
            break;
        case 2:
            strcpy(comp,"Paper");
            break;
        case 3:
            strcpy(comp,"Scissors");
            break;
        }

        if ((userInp==1 && randNum==2) || (userInp==2 && randNum==3) || (userInp==3 && randNum==1))
        {
            printf("The computer had chosen %s\n", comp);
            printf("You have Lost. Try again.\n");
        }
        else if (userInp==randNum)
        {
            printf("The computer had chosen %s\n", comp);
            printf("Wow thats a draw. Try again.\n");
        }
        else
        {
            printf("The computer had chosen %s\n", comp);
            printf("You have won.\n");
        }
        printf("\nWant to play again?\n");
        printf("1. Yes\n");
        printf("2. No\n");
        printf("Give us your input: ");
        scanf("%d",&reset);
    }
    return 0;
}

void menuPrint(){
    printf("\n----------------------------------------------\n");
    printf("Welcome to the Rock Paper Scissors Game\n");
    printf("Choose any of the following options:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("0. Exit\n");
}