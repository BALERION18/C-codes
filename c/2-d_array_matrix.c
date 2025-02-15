// matrix using 2d array
#include <stdio.h>

int main() {
    int i, j, r, c, a[50][50];

    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Entered matrix is:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}