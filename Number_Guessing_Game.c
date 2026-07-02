#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int randNum,guess,count=0;
    srand(time(NULL));
    randNum = rand()%100 +1;
    printf("Welcome to the Number Guessing Game!\n");
    do
    {
        printf("Enter your guess:\t");
        scanf("%d",&guess);
        if (guess<randNum)
        {
            printf("Enter a bigger number.\n");
        }
        else if (guess>randNum)
        {
            printf("Enter a smaller number.\n");
        }
        else
        {
            printf("Congratulations!! You have successfully guessed the random number.\n");
        }
        
    } while (randNum!=guess);
    return 0;
}