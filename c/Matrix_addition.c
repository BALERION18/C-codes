//MATRIX ADDITION
#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;


    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);

    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);


    if (cols1 != rows2) {
        printf("Matrix multiplication not possible as number of columns of the first matrix must be equal to the number of rows of the second matrix.\n");
        return 1;
    }


    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];


    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
        }
    }


    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }


    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }


    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
                result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

 
    printf("\nResultant matrix after addition:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}