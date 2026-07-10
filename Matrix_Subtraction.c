#include <stdio.h>

void printMatrix(int mat[10][10],int row,int col);

int main() {
    int matA[10][10],matB[10][10],matC[10][10];
    int rowsA,rowsB,colsA,colsB;
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
    printf("\nEnter The Number Of Rows Of Matrix B: ");
    scanf("%d",&rowsB);
    printf("\nEnter The Number Of Columns Of Matrix B: ");
    scanf("%d",&colsB);
    printf("\nEnter The Values Of The Matrix B: ");
    for (int i = 0; i < rowsB; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            printf("\nFor Row %d And Column %d : ",i+1,j+1);
            scanf("%d",&matB[i][j]);
        }
    }
    printf("\nMatrix A:\n");
    printMatrix(matA,rowsA,colsA);
    printf("\nMatrix B:\n");
    printMatrix(matB,rowsB,colsB);

    if (rowsA != rowsB || colsA != colsB)
    {
        printf("\nMatrix Addition Is Not Possible!");
        return 0;
    }

    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsA; j++)
        {
            matC[i][j] = matA[i][j]-matB[i][j];
        }
    }
    printf("\n\nThe Subtraction of The Matrices A And B Is : \n");
    printMatrix(matC,rowsA,colsA);
    
    return 0;
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
    
}
