#include <stdio.h>
#include <time.h>

int main() {
    time_t start, end;
    double elapsed;

    printf("Press Enter to start the stopwatch...");
    getchar();

    time(&start);

    printf("Stopwatch started!\n");
    printf("Press Enter to stop...");
    getchar();

    time(&end);

    elapsed = difftime(end, start);

    printf("\nElapsed time: %.2f seconds\n", elapsed);

    return 0;
}