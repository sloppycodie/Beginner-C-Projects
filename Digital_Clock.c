#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int instructions();
void clearScreen();

int main() {
    int pref=instructions();
    char currentTime[100];

    while (1)
    {
        clearScreen();
        time_t unfiltered;
        time(&unfiltered);
        struct tm *filtered;
        filtered = localtime(&unfiltered);
        if (pref==1)
        {
            strftime(currentTime,sizeof(currentTime),"Time : %H:%M:%S\nDate : %d/%m/%Y",filtered);
        }
        else{
            strftime(currentTime,sizeof(currentTime),"Time : %I:%M:%S %p\nDate : %d/%m/%Y",filtered);
        }
        printf("%s\n",currentTime);
        sleep(1);
    }
    
    return 0;
}

//We are clearing the screen using preprocessor
void clearScreen(){
    #ifdef _WIN32//For windows
        system("cls");
    #else//For Linux and Mac
        system("clear");
    #endif
}

int instructions(){
    int inp;
    printf("Welcome to the Digital Clock App\n");
    printf("1. 24 Hours System\n");
    printf("2. 12 Hours System\n");
    printf("Please Enter Your Preference: ");
    scanf("%d",&inp);
    return inp;
}