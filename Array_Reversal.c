#include <stdio.h>

int main() {
    int arr[200],n,temp;
    printf("Enter Number of Elements: ");
    scanf("%d",&n);
    printf("Enter The Numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Numbers Are: ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",arr[i]);
    }

    //Type 1:
    printf("\nThe reversed numbers are: ");
    for (int i = n-1; i >=0; i--)
    {
        printf(" %d ",arr[i]);
    }

    //Type 2:
    printf("\nThe reversed numbers are: ");
    for (int i = 0; i < n/2; i++)
    {
        temp = arr[i];
        arr[i]= arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf(" %d ",arr[i]);
    }
    
    return 0;
}