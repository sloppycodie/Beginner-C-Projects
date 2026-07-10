#include <stdio.h>

void printMatrix(int mat[10][10],int row,int col);

int main() {
    int matA[10][10],transpose[10][10];
    int rowsA,colsA;
    printf("\nEnter The Number Of Rows Of Matrix A: ");
    scanf("%d",&rowsA);
    printf("\nEnter The Number Of Columns Of Matrix A: ");
    scanf("%d",&colsA);
    printf("\nEnter The Values Of The Matrix A: ");
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsA; j++)
        {
            printf("\nFor Row %d And Column %d : ",i+1,j+1);
            scanf("%d",&matA[i][j]);
        }
    }
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsA; j++)
        {
            transpose[j][i] = matA[i][j];
        }
    }
    printf("\n\nThe Transpose Of The Matrix Is:\n");
    printMatrix(transpose,colsA,rowsA);

}

void printMatrix(int mat[10][10],int row,int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}