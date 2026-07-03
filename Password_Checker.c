#include <stdio.h>
#include <string.h>

int main() {
    int count=0;
    char inp[50];
    char password[] = "Ji60n&017";
    printf("Please, Enter Your Password: ");
    fgets(inp,sizeof(inp),stdin);
    inp[strcspn(inp,"\n")] = '\0';
    while (1)
    {
        count++;
        if (count==4)
        {
            printf("Too Many Failed Attempts\nAccess Terminated.");
            break;
        }
        if (strcmp(inp,password)==0)
        {
            printf("Access Granted!");
        }else{
            printf("Access Denied!");
        }
    }
    return 0;
}
