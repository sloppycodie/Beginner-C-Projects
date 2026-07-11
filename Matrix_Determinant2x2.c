#include <stdio.h>
//array is already a pointer so it doesn't need any *
void matrixInput(int mat[10][10],int *row,int *col);
void printMatrix(int mat[10][10],int row,int col);


int main() {
    int matA[10][10];
    int rowsA,colsA,determinant;
    printf("\nFill The Information For Matrix A\n");
    matrixInput(matA,&rowsA,&colsA);
    if (rowsA != 2 || colsA != 2)
    {
        printf("Please enter a 2 x 2 matrix.\n");
        return 0;
    }
    
    determinant = matA[0][0]*matA[1][1]-matA[0][1]*matA[1][0];
    printf("The determinant of matrix A is: %d",determinant);
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

