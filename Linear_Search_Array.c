#include <stdio.h>

int main() {
    int n,arr[100],found=0,target;
    printf("Enter Number of Elements: ");
    scanf("%d",&n);
    printf("\nEnter The Numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter The Target Number: ");
    scanf("%d",&target);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==target)
        {
            printf("\nFound At Position: %d\n",i+1);
            found++;
        }
    }
    if (found>0)
    {
        printf("Occurrences: %d",found);
    }
    if (found==0)
    {
        printf("Number Not Found.");
    }
    return 0;
}