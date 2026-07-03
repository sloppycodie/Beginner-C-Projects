#include <stdio.h>
#include <string.h>

int main() {
    char inp[50];
    char password[] = "Ji60n&017";
    printf("Please, Enter Your Password: ");
    fgets(inp,sizeof(inp),stdin);
    inp[strcspn(inp,"\n")] = '\0';
    if (strcmp(inp,password)==0)
    {
        printf("Access Granted!");
    }else{
        printf("Access Denied!");
    }
    return 0;
}