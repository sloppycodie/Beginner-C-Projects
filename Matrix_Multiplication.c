#include <stdio.h>
//array is already a pointer so it doesn't need any *
void matrixInput(int mat[10][10],int *row,int *col);
void printMatrix(int mat[10][10],int row,int col);

int main() {
    int matA[10][10],matB[10][10],matC[10][10]={0};
    int rowsA,colsA,rowsB,colsB;
    printf("\nFill The Information For Matrix A\n");
    matrixInput(matA,&rowsA,&colsA);
    printf("\nFill The Information For Matrix B\n");
    matrixInput(matB,&rowsB,&colsB);
    printf("\nMatrix A: \n");
    printMatrix(matA,rowsA,colsA);
    printf("\nMatrix B: \n");
    printMatrix(matB,rowsB,colsB);
    printf("\nMatrix A: %d X %d\n",rowsA,colsA);
    printf("\nMatrix B: %d X %d\n",rowsB,colsB);
    if (colsA != rowsB)
    {
        printf("Matrix multiplication is not possible.\nColumns of A must equal rows of B.\n");
        return 0;
    }

    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            for (int k = 0; k < colsA; k++)
            {
                matC[i][j] += matA[i][k]*matB[k][j];
            }
            
        }
        
    }
    printf("\nMultiplication Result:\n");
    printMatrix(matC,rowsA,colsB);
    
    return 0;
}

void matrixInput(int mat[10][10],int *row,int *col){
    printf("\nEnter The Number Of Rows Of Matrix: ");
    scanf("%d",row);
    printf("\nEnter The Number Of Columns Of Matrix: ");
    scanf("%d",col);
    printf("\nEnter The Values Of The Matrix: ");
    for (int i = 0; i < *row; i++)//Dereferencing gives me the value of the pointer
    {
        for (int j = 0; j < *col; j++)
        {
            printf("\nFor Row %d And Column %d : ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
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